/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mini_project_initialize.c
 *
 * Code generation for function 'mini_project_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "mini_project_initialize.h"
#include "matlabCodegenHandle.h"
#include "_coder_mini_project_mex.h"
#include "mini_project_data.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Declarations */
static void mini_project_once(void);

/* Function Definitions */
static void mini_project_once(void)
{
  covrtInstanceData *t0_data = NULL;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  emlrtCoverageInstance.data = t0_data;
  emlrtAssignP(&b_eml_mx, NULL);
  emlrtAssignP(&eml_mx, NULL);
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m",
                  0U, 1U, 5U, 1U, 0U, 0U, 0U, 0U, 1U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "mini_project", 1, -1, 2188);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 1852, -1, 1875);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 1549, -1, 1623);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 723, -1, 1418);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 2140, -1, 2160);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 83, -1, 644);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 1510, 1536, -1, 1842);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 0U, 0U, 687, 714, 2074);

  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void mini_project_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Video_and_Image_Blockset", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    mini_project_once();
  }
}

/* End of code generation (mini_project_initialize.c) */
