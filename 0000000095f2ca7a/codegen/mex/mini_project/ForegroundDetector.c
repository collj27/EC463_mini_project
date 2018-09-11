/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ForegroundDetector.c
 *
 * Code generation for function 'ForegroundDetector'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "ForegroundDetector.h"
#include "matlabCodegenHandle.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Declarations */
static void d_ForegroundDetector_Foreground(vision_ForegroundDetector **obj);

/* Function Definitions */
static void d_ForegroundDetector_Foreground(vision_ForegroundDetector **obj)
{
  (*obj)->LearningRate = 0.005;
  (*obj)->isInitialized = 0;
  (*obj)->hasConstructed = false;
  (*obj)->matlabCodegenIsDeleted = false;
}

vision_ForegroundDetector *c_ForegroundDetector_Foreground
  (vision_ForegroundDetector *obj)
{
  vision_ForegroundDetector *b_obj;
  b_obj = obj;
  d_ForegroundDetector_Foreground(&b_obj);
  return b_obj;
}

/* End of code generation (ForegroundDetector.c) */
