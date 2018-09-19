/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * step.h
 *
 * Code generation for function 'step'
 *
 */

#ifndef STEP_H
#define STEP_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "mini_project_types.h"

/* Function Declarations */
extern vision_VideoFileReader_0 *Constructor(vision_VideoFileReader_0 *obj);
extern void Destructor(vision_VideoFileReader_0 *obj);
extern void InitializeConditions(vision_VideoFileReader_0 *obj);
extern void Outputs(vision_VideoFileReader_0 *obj, float Y0[691200], boolean_T
                    *Y1, boolean_T *Y2);
extern void Start(vision_VideoFileReader_0 *obj);

#endif

/* End of code generation (step.h) */
