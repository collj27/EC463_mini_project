/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mini_project_terminate.c
 *
 * Code generation for function 'mini_project_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "mini_project_terminate.h"
#include "matlabCodegenHandle.h"
#include "_coder_mini_project_mex.h"
#include "mini_project_data.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Definitions */
void mini_project_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
}

void mini_project_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (mini_project_terminate.c) */
