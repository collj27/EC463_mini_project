/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "SystemCore.h"
#include "BlobAnalysis.h"
#include "matlabCodegenHandle.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "rtwtypes.h"
#include "cvstCG_foregroundDetector.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

/* Function Definitions */
void SystemCore_step(const emlrtStack *sp, vision_ForegroundDetector *obj, const
                     real32_T varargin_1[691200], boolean_T varargout_1[230400])
{
  real_T learningRate;
  void * ptrObj;
  int32_T i0;
  int32_T dims[3];
  static const int16_T b_dims[3] = { 360, 640, 3 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized == 2) {
    emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen",
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }

  if (obj->isInitialized != 1) {
    st.site = &n_emlrtRSI;
    b_st.site = &n_emlrtRSI;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen",
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, "setup");
    }

    obj->isInitialized = 1;
    ptrObj = NULL;
    foregroundDetector_construct_float_float(&ptrObj);
    obj->pForegroundDetector = ptrObj;
    obj->hasConstructed = true;
    ptrObj = obj->pForegroundDetector;
    for (i0 = 0; i0 < 3; i0++) {
      dims[i0] = b_dims[i0];
    }

    foregroundDetector_initialize_float_float(ptrObj, 3, dims, 3, 0.0138408309F,
      0.05F, 6.25F, 0.7F);
    obj->isSetupComplete = true;
    obj->Time = 0.0;
    if (obj->hasConstructed) {
      ptrObj = obj->pForegroundDetector;
      foregroundDetector_reset_float_float(ptrObj);
    }
  }

  st.site = &n_emlrtRSI;
  obj->Time++;
  if (obj->Time < 50.0) {
    learningRate = obj->Time;
    learningRate = 1.0 / learningRate;
  } else {
    learningRate = obj->LearningRate;
  }

  ptrObj = obj->pForegroundDetector;
  foregroundDetector_step_float_float(ptrObj, varargin_1, varargout_1, (real32_T)
    learningRate);
}

void b_SystemCore_step(const emlrtStack *sp, visioncodegen_BlobAnalysis *obj,
  const boolean_T varargin_1[230400], int32_T varargout_1_data[], int32_T
  varargout_1_size[2])
{
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized == 2) {
    emlrtErrorWithMessageIdR2018a(sp, &b_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen",
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }

  if (obj->isInitialized != 1) {
    st.site = &n_emlrtRSI;
    b_st.site = &n_emlrtRSI;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen",
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, "setup");
    }

    obj->isInitialized = 1;
    obj->isSetupComplete = true;
  }

  st.site = &n_emlrtRSI;
  BlobAnalysis_outputImpl(obj, varargin_1, varargout_1_data, varargout_1_size);
}

/* End of code generation (SystemCore.c) */
