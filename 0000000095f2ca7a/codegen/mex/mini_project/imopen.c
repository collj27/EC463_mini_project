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
#include "imerode.h"
#include "imdilate.h"
#include "matlabCodegenHandle.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Definitions */
void imopen(mini_projectStackData *SD, const boolean_T A[230400], boolean_T B
            [230400])
{
  imerode(A, SD->f0.bv0);
  imdilate(SD->f0.bv0, B);
}

/* End of code generation (imopen.c) */
