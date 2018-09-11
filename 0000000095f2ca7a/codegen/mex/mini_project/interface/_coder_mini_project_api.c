/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_mini_project_api.c
 *
 * Code generation for function '_coder_mini_project_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "_coder_mini_project_api.h"
#include "matlabCodegenHandle.h"
#include "mini_project_data.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Definitions */
void mini_project_api(mini_projectStackData *SD, int32_T nlhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  mini_project(SD, &st);
}

/* End of code generation (_coder_mini_project_api.c) */
