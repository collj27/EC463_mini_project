/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mini_project_data.c
 *
 * Code generation for function 'mini_project_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "mini_project_data.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
const mxArray *eml_mx;
const mxArray *b_eml_mx;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "mini_project",                      /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 4093231316U, 3755654364U, 1605221666U, 2449470297U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo j_emlrtRSI = { 269,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 275,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 1,          /* lineNo */
  "System",                            /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 1,          /* lineNo */
  "SystemProp",                        /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 16,         /* lineNo */
  "StructuringElementHelper",          /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/+images/+internal/+coder/+strel/StructuringElementHelper.m"/* pathName */
};

emlrtRSInfo p_emlrtRSI = { 1,          /* lineNo */
  "BlobAnalysis",                      /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+visioncodegen/BlobAnalysis.p"/* pathName */
};

emlrtRSInfo q_emlrtRSI = { 1,          /* lineNo */
  "Nondirect",                         /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"/* pathName */
};

emlrtRSInfo r_emlrtRSI = { 1,          /* lineNo */
  "pvParse",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/matlab/system/+matlab/+system/pvParse.p"/* pathName */
};

emlrtRSInfo s_emlrtRSI = { 404,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 406,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 407,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo v_emlrtRSI = { 449,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo w_emlrtRSI = { 455,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 366,        /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo y_emlrtRSI = { 40,         /* lineNo */
  "imopen",                            /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/imopen.m"/* pathName */
};

emlrtRSInfo ab_emlrtRSI = { 77,        /* lineNo */
  "imopen",                            /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/imopen.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 132,       /* lineNo */
  "imerode",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/imerode.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 17,        /* lineNo */
  "morphop",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/+images/+internal/morphop.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 22,        /* lineNo */
  "morphop",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/+images/+internal/+coder/morphop.m"/* pathName */
};

emlrtRSInfo eb_emlrtRSI = { 580,       /* lineNo */
  "morphop",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/+images/+internal/+coder/morphop.m"/* pathName */
};

emlrtRSInfo fb_emlrtRSI = { 802,       /* lineNo */
  "morphop",                           /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/+images/+internal/+coder/morphop.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 135,       /* lineNo */
  "imdilate",                          /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/images/images/imdilate.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 1,         /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 473,       /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 475,       /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 477,       /* lineNo */
  "ForegroundDetector",                /* fcnName */
  "/Applications/MATLAB_R2018a.app/toolbox/vision/vision/+vision/ForegroundDetector.m"/* pathName */
};

/* End of code generation (mini_project_data.c) */
