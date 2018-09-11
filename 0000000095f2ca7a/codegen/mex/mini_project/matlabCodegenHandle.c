/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * matlabCodegenHandle.c
 *
 * Code generation for function 'matlabCodegenHandle'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "matlabCodegenHandle.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "cvstCG_foregroundDetector.h"

/* Function Definitions */
void c_matlabCodegenHandle_matlabCod(const emlrtStack *sp,
  vision_ForegroundDetector *obj)
{
  void * ptrObj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      if (obj->isSetupComplete && obj->hasConstructed) {
        ptrObj = obj->pForegroundDetector;
        foregroundDetector_release_float_float(ptrObj);
        ptrObj = obj->pForegroundDetector;
        foregroundDetector_deleteObj_float_float(ptrObj);
        obj->hasConstructed = false;
      }
    }
  }
}

void d_matlabCodegenHandle_matlabCod(const emlrtStack *sp,
  visioncodegen_BlobAnalysis *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

/* End of code generation (matlabCodegenHandle.c) */
