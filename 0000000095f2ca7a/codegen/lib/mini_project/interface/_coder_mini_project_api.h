/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_mini_project_api.h
 *
 * Code generation for function '_coder_mini_project_api'
 *
 */

#ifndef _CODER_MINI_PROJECT_API_H
#define _CODER_MINI_PROJECT_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_mini_project_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void mini_project(void);
extern void mini_project_api(int32_T nlhs);
extern void mini_project_atexit(void);
extern void mini_project_initialize(void);
extern void mini_project_terminate(void);
extern void mini_project_xil_terminate(void);

#endif

/* End of code generation (_coder_mini_project_api.h) */
