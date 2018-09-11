/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imerode.c
 *
 * Code generation for function 'imerode'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "imerode.h"
#include "matlabCodegenHandle.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "libmwmorphop_binary_tbb.h"

/* Function Definitions */
void imerode(const boolean_T A[230400], boolean_T B[230400])
{
  int32_T i1;
  boolean_T nhood[9];
  real_T asizeT[2];
  real_T nsizeT[2];
  for (i1 = 0; i1 < 9; i1++) {
    nhood[i1] = true;
  }

  for (i1 = 0; i1 < 2; i1++) {
    asizeT[i1] = 360.0 + 280.0 * (real_T)i1;
    nsizeT[i1] = 3.0;
  }

  erode_binary_ones33_tbb(A, asizeT, 2.0, nhood, nsizeT, 2.0, B);
}

/* End of code generation (imerode.c) */
