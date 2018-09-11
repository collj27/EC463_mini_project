/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 */

#ifndef SYSTEMCORE_H
#define SYSTEMCORE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "mini_project_types.h"

/* Function Declarations */
extern void SystemCore_step(const emlrtStack *sp, vision_ForegroundDetector *obj,
  const real32_T varargin_1[691200], boolean_T varargout_1[230400]);
extern void b_SystemCore_step(const emlrtStack *sp, visioncodegen_BlobAnalysis
  *obj, const boolean_T varargin_1[230400], int32_T varargout_1_data[], int32_T
  varargout_1_size[2]);

#endif

/* End of code generation (SystemCore.h) */
