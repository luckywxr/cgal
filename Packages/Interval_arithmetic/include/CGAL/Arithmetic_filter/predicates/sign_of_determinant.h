// ======================================================================
//
// Copyright (c) 1999,2000,2001 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------
// 
// release       :
// release_date  :
// 
// file          : include/CGAL/Arithmetic_filter/predicates/sign_of_determinant.h
// package       : Interval_arithmetic
// author(s)     : Sylvain Pion <Sylvain.Pion@sophia.inria.fr>
//
// coordinator   : INRIA Sophia-Antipolis (<Mariette.Yvinec@sophia.inria.fr>)
// ======================================================================

// This file is automatically generated by
// scripts/filtered_predicates_generator.pl

#ifndef CGAL_ARITHMETIC_FILTER_PREDICATES_SIGN_OF_DETERMINANT_H
#define CGAL_ARITHMETIC_FILTER_PREDICATES_SIGN_OF_DETERMINANT_H

#include <CGAL/Profile_counter.h>

CGAL_BEGIN_NAMESPACE
template <class ET> class Lazy_exact_nt;
CGAL_END_NAMESPACE

CGAL_BEGIN_NAMESPACE

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/* inline */
Sign
sign_of_determinant2x2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a00,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a01,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a10,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a11)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("IA sign_of_determinant2x2 calls");
    ++calls;
#endif
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return sign_of_determinant2x2(
		a00.interval(),
		a01.interval(),
		a10.interval(),
		a11.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("IA sign_of_determinant2x2 failures");
    ++failures;
#endif
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant2x2(
		a00.exact(),
		a01.exact(),
		a10.exact(),
		a11.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/* inline */
Sign
sign_of_determinant2x2(
    const Lazy_exact_nt<ET> &a00,
    const Lazy_exact_nt<ET> &a01,
    const Lazy_exact_nt<ET> &a10,
    const Lazy_exact_nt<ET> &a11)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("Lazy IA sign_of_determinant2x2 calls");
    ++calls;
#endif
    Protect_FPU_rounding<false> Protection;
    return sign_of_determinant2x2(
		a00.interval(),
		a01.interval(),
		a10.interval(),
		a11.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("Lazy IA sign_of_determinant2x2 failures");
    ++failures;
#endif
    Protect_FPU_rounding<true> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant2x2(
		a00.exact(),
		a01.exact(),
		a10.exact(),
		a11.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/* inline */
Sign
sign_of_determinant3x3(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a00,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a01,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a02,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a10,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a11,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a12,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a20,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a21,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a22)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("IA sign_of_determinant3x3 calls");
    ++calls;
#endif
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return sign_of_determinant3x3(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("IA sign_of_determinant3x3 failures");
    ++failures;
#endif
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant3x3(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/* inline */
Sign
sign_of_determinant3x3(
    const Lazy_exact_nt<ET> &a00,
    const Lazy_exact_nt<ET> &a01,
    const Lazy_exact_nt<ET> &a02,
    const Lazy_exact_nt<ET> &a10,
    const Lazy_exact_nt<ET> &a11,
    const Lazy_exact_nt<ET> &a12,
    const Lazy_exact_nt<ET> &a20,
    const Lazy_exact_nt<ET> &a21,
    const Lazy_exact_nt<ET> &a22)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("Lazy IA sign_of_determinant3x3 calls");
    ++calls;
#endif
    Protect_FPU_rounding<false> Protection;
    return sign_of_determinant3x3(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("Lazy IA sign_of_determinant3x3 failures");
    ++failures;
#endif
    Protect_FPU_rounding<true> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant3x3(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/* inline */
Sign
sign_of_determinant4x4(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a00,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a01,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a02,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a03,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a10,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a11,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a12,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a13,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a20,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a21,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a22,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a23,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a30,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a31,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a32,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a33)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("IA sign_of_determinant4x4 calls");
    ++calls;
#endif
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return sign_of_determinant4x4(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a03.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a13.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval(),
		a23.interval(),
		a30.interval(),
		a31.interval(),
		a32.interval(),
		a33.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("IA sign_of_determinant4x4 failures");
    ++failures;
#endif
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant4x4(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a03.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a13.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact(),
		a23.exact(),
		a30.exact(),
		a31.exact(),
		a32.exact(),
		a33.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/* inline */
Sign
sign_of_determinant4x4(
    const Lazy_exact_nt<ET> &a00,
    const Lazy_exact_nt<ET> &a01,
    const Lazy_exact_nt<ET> &a02,
    const Lazy_exact_nt<ET> &a03,
    const Lazy_exact_nt<ET> &a10,
    const Lazy_exact_nt<ET> &a11,
    const Lazy_exact_nt<ET> &a12,
    const Lazy_exact_nt<ET> &a13,
    const Lazy_exact_nt<ET> &a20,
    const Lazy_exact_nt<ET> &a21,
    const Lazy_exact_nt<ET> &a22,
    const Lazy_exact_nt<ET> &a23,
    const Lazy_exact_nt<ET> &a30,
    const Lazy_exact_nt<ET> &a31,
    const Lazy_exact_nt<ET> &a32,
    const Lazy_exact_nt<ET> &a33)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("Lazy IA sign_of_determinant4x4 calls");
    ++calls;
#endif
    Protect_FPU_rounding<false> Protection;
    return sign_of_determinant4x4(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a03.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a13.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval(),
		a23.interval(),
		a30.interval(),
		a31.interval(),
		a32.interval(),
		a33.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("Lazy IA sign_of_determinant4x4 failures");
    ++failures;
#endif
    Protect_FPU_rounding<true> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant4x4(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a03.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a13.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact(),
		a23.exact(),
		a30.exact(),
		a31.exact(),
		a32.exact(),
		a33.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/* CGAL_KERNEL_LARGE_INLINE */
Sign
sign_of_determinant5x5(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a00,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a01,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a02,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a03,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a04,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a10,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a11,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a12,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a13,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a14,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a20,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a21,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a22,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a23,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a24,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a30,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a31,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a32,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a33,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a34,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a40,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a41,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a42,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a43,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a44)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("IA sign_of_determinant5x5 calls");
    ++calls;
#endif
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return sign_of_determinant5x5(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a03.interval(),
		a04.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a13.interval(),
		a14.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval(),
		a23.interval(),
		a24.interval(),
		a30.interval(),
		a31.interval(),
		a32.interval(),
		a33.interval(),
		a34.interval(),
		a40.interval(),
		a41.interval(),
		a42.interval(),
		a43.interval(),
		a44.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("IA sign_of_determinant5x5 failures");
    ++failures;
#endif
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant5x5(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a03.exact(),
		a04.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a13.exact(),
		a14.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact(),
		a23.exact(),
		a24.exact(),
		a30.exact(),
		a31.exact(),
		a32.exact(),
		a33.exact(),
		a34.exact(),
		a40.exact(),
		a41.exact(),
		a42.exact(),
		a43.exact(),
		a44.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/* CGAL_KERNEL_LARGE_INLINE */
Sign
sign_of_determinant5x5(
    const Lazy_exact_nt<ET> &a00,
    const Lazy_exact_nt<ET> &a01,
    const Lazy_exact_nt<ET> &a02,
    const Lazy_exact_nt<ET> &a03,
    const Lazy_exact_nt<ET> &a04,
    const Lazy_exact_nt<ET> &a10,
    const Lazy_exact_nt<ET> &a11,
    const Lazy_exact_nt<ET> &a12,
    const Lazy_exact_nt<ET> &a13,
    const Lazy_exact_nt<ET> &a14,
    const Lazy_exact_nt<ET> &a20,
    const Lazy_exact_nt<ET> &a21,
    const Lazy_exact_nt<ET> &a22,
    const Lazy_exact_nt<ET> &a23,
    const Lazy_exact_nt<ET> &a24,
    const Lazy_exact_nt<ET> &a30,
    const Lazy_exact_nt<ET> &a31,
    const Lazy_exact_nt<ET> &a32,
    const Lazy_exact_nt<ET> &a33,
    const Lazy_exact_nt<ET> &a34,
    const Lazy_exact_nt<ET> &a40,
    const Lazy_exact_nt<ET> &a41,
    const Lazy_exact_nt<ET> &a42,
    const Lazy_exact_nt<ET> &a43,
    const Lazy_exact_nt<ET> &a44)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("Lazy IA sign_of_determinant5x5 calls");
    ++calls;
#endif
    Protect_FPU_rounding<false> Protection;
    return sign_of_determinant5x5(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a03.interval(),
		a04.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a13.interval(),
		a14.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval(),
		a23.interval(),
		a24.interval(),
		a30.interval(),
		a31.interval(),
		a32.interval(),
		a33.interval(),
		a34.interval(),
		a40.interval(),
		a41.interval(),
		a42.interval(),
		a43.interval(),
		a44.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("Lazy IA sign_of_determinant5x5 failures");
    ++failures;
#endif
    Protect_FPU_rounding<true> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant5x5(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a03.exact(),
		a04.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a13.exact(),
		a14.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact(),
		a23.exact(),
		a24.exact(),
		a30.exact(),
		a31.exact(),
		a32.exact(),
		a33.exact(),
		a34.exact(),
		a40.exact(),
		a41.exact(),
		a42.exact(),
		a43.exact(),
		a44.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/* CGAL_KERNEL_LARGE_INLINE */
Sign
sign_of_determinant6x6(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a00,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a01,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a02,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a03,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a04,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a05,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a10,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a11,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a12,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a13,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a14,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a15,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a20,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a21,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a22,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a23,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a24,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a25,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a30,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a31,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a32,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a33,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a34,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a35,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a40,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a41,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a42,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a43,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a44,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a45,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a50,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a51,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a52,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a53,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a54,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &a55)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("IA sign_of_determinant6x6 calls");
    ++calls;
#endif
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return sign_of_determinant6x6(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a03.interval(),
		a04.interval(),
		a05.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a13.interval(),
		a14.interval(),
		a15.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval(),
		a23.interval(),
		a24.interval(),
		a25.interval(),
		a30.interval(),
		a31.interval(),
		a32.interval(),
		a33.interval(),
		a34.interval(),
		a35.interval(),
		a40.interval(),
		a41.interval(),
		a42.interval(),
		a43.interval(),
		a44.interval(),
		a45.interval(),
		a50.interval(),
		a51.interval(),
		a52.interval(),
		a53.interval(),
		a54.interval(),
		a55.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("IA sign_of_determinant6x6 failures");
    ++failures;
#endif
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant6x6(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a03.exact(),
		a04.exact(),
		a05.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a13.exact(),
		a14.exact(),
		a15.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact(),
		a23.exact(),
		a24.exact(),
		a25.exact(),
		a30.exact(),
		a31.exact(),
		a32.exact(),
		a33.exact(),
		a34.exact(),
		a35.exact(),
		a40.exact(),
		a41.exact(),
		a42.exact(),
		a43.exact(),
		a44.exact(),
		a45.exact(),
		a50.exact(),
		a51.exact(),
		a52.exact(),
		a53.exact(),
		a54.exact(),
		a55.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/* CGAL_KERNEL_LARGE_INLINE */
Sign
sign_of_determinant6x6(
    const Lazy_exact_nt<ET> &a00,
    const Lazy_exact_nt<ET> &a01,
    const Lazy_exact_nt<ET> &a02,
    const Lazy_exact_nt<ET> &a03,
    const Lazy_exact_nt<ET> &a04,
    const Lazy_exact_nt<ET> &a05,
    const Lazy_exact_nt<ET> &a10,
    const Lazy_exact_nt<ET> &a11,
    const Lazy_exact_nt<ET> &a12,
    const Lazy_exact_nt<ET> &a13,
    const Lazy_exact_nt<ET> &a14,
    const Lazy_exact_nt<ET> &a15,
    const Lazy_exact_nt<ET> &a20,
    const Lazy_exact_nt<ET> &a21,
    const Lazy_exact_nt<ET> &a22,
    const Lazy_exact_nt<ET> &a23,
    const Lazy_exact_nt<ET> &a24,
    const Lazy_exact_nt<ET> &a25,
    const Lazy_exact_nt<ET> &a30,
    const Lazy_exact_nt<ET> &a31,
    const Lazy_exact_nt<ET> &a32,
    const Lazy_exact_nt<ET> &a33,
    const Lazy_exact_nt<ET> &a34,
    const Lazy_exact_nt<ET> &a35,
    const Lazy_exact_nt<ET> &a40,
    const Lazy_exact_nt<ET> &a41,
    const Lazy_exact_nt<ET> &a42,
    const Lazy_exact_nt<ET> &a43,
    const Lazy_exact_nt<ET> &a44,
    const Lazy_exact_nt<ET> &a45,
    const Lazy_exact_nt<ET> &a50,
    const Lazy_exact_nt<ET> &a51,
    const Lazy_exact_nt<ET> &a52,
    const Lazy_exact_nt<ET> &a53,
    const Lazy_exact_nt<ET> &a54,
    const Lazy_exact_nt<ET> &a55)
{
  try
  {
#ifdef CGAL_PROFILE
    static Profile_counter calls("Lazy IA sign_of_determinant6x6 calls");
    ++calls;
#endif
    Protect_FPU_rounding<false> Protection;
    return sign_of_determinant6x6(
		a00.interval(),
		a01.interval(),
		a02.interval(),
		a03.interval(),
		a04.interval(),
		a05.interval(),
		a10.interval(),
		a11.interval(),
		a12.interval(),
		a13.interval(),
		a14.interval(),
		a15.interval(),
		a20.interval(),
		a21.interval(),
		a22.interval(),
		a23.interval(),
		a24.interval(),
		a25.interval(),
		a30.interval(),
		a31.interval(),
		a32.interval(),
		a33.interval(),
		a34.interval(),
		a35.interval(),
		a40.interval(),
		a41.interval(),
		a42.interval(),
		a43.interval(),
		a44.interval(),
		a45.interval(),
		a50.interval(),
		a51.interval(),
		a52.interval(),
		a53.interval(),
		a54.interval(),
		a55.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
#ifdef CGAL_PROFILE
    static Profile_counter failures("Lazy IA sign_of_determinant6x6 failures");
    ++failures;
#endif
    Protect_FPU_rounding<true> Protection(CGAL_FE_TONEAREST);
    return sign_of_determinant6x6(
		a00.exact(),
		a01.exact(),
		a02.exact(),
		a03.exact(),
		a04.exact(),
		a05.exact(),
		a10.exact(),
		a11.exact(),
		a12.exact(),
		a13.exact(),
		a14.exact(),
		a15.exact(),
		a20.exact(),
		a21.exact(),
		a22.exact(),
		a23.exact(),
		a24.exact(),
		a25.exact(),
		a30.exact(),
		a31.exact(),
		a32.exact(),
		a33.exact(),
		a34.exact(),
		a35.exact(),
		a40.exact(),
		a41.exact(),
		a42.exact(),
		a43.exact(),
		a44.exact(),
		a45.exact(),
		a50.exact(),
		a51.exact(),
		a52.exact(),
		a53.exact(),
		a54.exact(),
		a55.exact());
  }
}
#endif

CGAL_END_NAMESPACE

#endif // CGAL_ARITHMETIC_FILTER_PREDICATES_SIGN_OF_DETERMINANT_H
