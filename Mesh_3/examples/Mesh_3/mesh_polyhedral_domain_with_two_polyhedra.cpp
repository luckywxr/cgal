#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <CGAL/Surface_mesh.h>
#include <CGAL/boost/graph/Graph_with_descriptor_with_graph.h>
#include <CGAL/boost/graph/PMP_properties_Surface_mesh.h>
#include <CGAL/Polyhedral_mesh_domain_with_features_3.h>
#include <CGAL/make_mesh_3.h>
#include <CGAL/Timer.h>

// Domain 
typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef CGAL::Surface_mesh<K::Point_3> Surface_mesh;
typedef CGAL::Graph_with_descriptor_with_graph<Surface_mesh> Surface_mesh_gwdwg;

typedef CGAL::Polyhedral_mesh_domain_with_features_3<K, Surface_mesh_gwdwg> Mesh_domain;


#ifdef CGAL_CONCURRENT_MESH_3
typedef CGAL::Parallel_tag Concurrency_tag;
#else
typedef CGAL::Sequential_tag Concurrency_tag;
#endif

// Triangulation
typedef CGAL::Mesh_triangulation_3<Mesh_domain,CGAL::Default,Concurrency_tag>::type Tr;

typedef CGAL::Mesh_complex_3_in_triangulation_3<
  Tr,Mesh_domain::Corner_index,Mesh_domain::Curve_segment_index> C3t3;

// Criteria
typedef CGAL::Mesh_criteria_3<Tr> Mesh_criteria;

// To avoid verbose function and named parameters call
using namespace CGAL::parameters;

int main(int argc, char*argv[])
{
  const char* fname = (argc>1)?argv[1]:"data/fandisk.off";
  std::ifstream input(fname);
  const char* fname2 = (argc>2)?argv[2]:"data/fandisk-box.off";
  std::ifstream input2(fname2);
  Surface_mesh sm, smbounding;
  input >> sm;
  input2 >> smbounding;
  Surface_mesh_gwdwg smesh(sm);
  Surface_mesh_gwdwg smeshbounding(smbounding);
  if(input.fail()){
    std::cerr << "Error: Cannot read file " <<  fname << std::endl;
    return EXIT_FAILURE;
  }
  CGAL::Timer t;
  t.start();
  // Create domain
  Mesh_domain domain(smesh, smeshbounding);

  // Get sharp features
  domain.detect_features();

  // Mesh criteria
  Mesh_criteria criteria(edge_size = 0.025,
                         facet_angle = 25, facet_size = 0.05, facet_distance = 0.005,
                         cell_radius_edge_ratio = 3, cell_size = 0.05);
  
  // Mesh generation
  C3t3 c3t3 = CGAL::make_mesh_3<C3t3>(domain, criteria);

  std::cerr << t.time() << " sec." << std::endl;
  // Output
  std::ofstream medit_file("out.mesh");
  c3t3.output_to_medit(medit_file);
}
