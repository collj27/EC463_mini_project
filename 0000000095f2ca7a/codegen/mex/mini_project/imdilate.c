/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imdilate.c
 *
 * Code generation for function 'imdilate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "imdilate.h"
#include "matlabCodegenHandle.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "libmwmorphop_binary_tbb.h"

/* Function Definitions */
void imdilate(const boolean_T A[230400], boolean_T B[230400])
{
  int32_T i2;
  boolean_T nhood[9];
  real_T asizeT[2];
  real_T nsizeT[2];
  for (i2 = 0; i2 < 9; i2++) {
    nhood[i2] = true;
  }

  for (i2 = 0; i2 < 2; i2++) {
    asizeT[i2] = 360.0 + 280.0 * (real_T)i2;
    nsizeT[i2] = 3.0;
  }

  dilate_binary_ones33_tbb(A, asizeT, 2.0, nhood, nsizeT, 2.0, B);
}

/* End of code generation (imdilate.c) */
