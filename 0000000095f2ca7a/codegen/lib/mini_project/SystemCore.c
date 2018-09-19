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
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "rtwtypes.h"
#include "cvstCG_foregroundDetector.h"

/* Function Definitions */
void SystemCore_step(vision_ForegroundDetector *obj, const float varargin_1
                     [691200], boolean_T varargout_1[230400])
{
  double learningRate;
  void * ptrObj;
  int i0;
  int dims[3];
  static const short b_dims[3] = { 360, 640, 3 };

  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
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

  obj->Time++;
  if (obj->Time < 50.0) {
    learningRate = obj->Time;
    learningRate = 1.0 / learningRate;
  } else {
    learningRate = obj->LearningRate;
  }

  ptrObj = obj->pForegroundDetector;
  foregroundDetector_step_float_float(ptrObj, varargin_1, varargout_1, (float)
    learningRate);
}

void b_SystemCore_step(visioncodegen_BlobAnalysis *obj, const boolean_T
  varargin_1[230400], int varargout_1_data[], int varargout_1_size[2])
{
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->isSetupComplete = true;
  }

  BlobAnalysis_outputImpl(obj, varargin_1, varargout_1_data, varargout_1_size);
}

/* End of code generation (SystemCore.c) */
