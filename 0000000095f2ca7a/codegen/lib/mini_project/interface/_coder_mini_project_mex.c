/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_mini_project_mex.c
 *
 * Code generation for function '_coder_mini_project_mex'
 *
 */

/* Include files */
#include "_coder_mini_project_api.h"
#include "_coder_mini_project_mex.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Declarations */
static void mini_project_mexFunction(int32_T nlhs, int32_T nrhs);

/* Function Definitions */
static void mini_project_mexFunction(int32_T nlhs, int32_T nrhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        12, "mini_project");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "mini_project");
  }

  /* Call the function. */
  mini_project_api(nlhs);

  /* Module termination. */
  mini_project_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  (void)prhs;
  mexAtExit(mini_project_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  mini_project_initialize();

  /* Dispatch the entry-point. */
  mini_project_mexFunction(nlhs, nrhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_mini_project_mex.c) */
