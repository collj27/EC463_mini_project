/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imopen.c
 *
 * Code generation for function 'imopen'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "imopen.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "libmwmorphop_binary_tbb.h"

/* Function Definitions */
void imopen(const boolean_T A[230400], boolean_T B[230400])
{
  int i1;
  boolean_T nhood[9];
  double asizeT[2];
  double nsizeT[2];
  static boolean_T b_B[230400];
  for (i1 = 0; i1 < 9; i1++) {
    nhood[i1] = true;
  }

  for (i1 = 0; i1 < 2; i1++) {
    asizeT[i1] = 360.0 + 280.0 * (double)i1;
    nsizeT[i1] = 3.0;
  }

  erode_binary_ones33_tbb(A, asizeT, 2.0, nhood, nsizeT, 2.0, b_B);
  for (i1 = 0; i1 < 9; i1++) {
    nhood[i1] = true;
  }

  for (i1 = 0; i1 < 2; i1++) {
    asizeT[i1] = 360.0 + 280.0 * (double)i1;
    nsizeT[i1] = 3.0;
  }

  dilate_binary_ones33_tbb(b_B, asizeT, 2.0, nhood, nsizeT, 2.0, B);
}

/* End of code generation (imopen.c) */
