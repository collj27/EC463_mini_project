/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mini_project_types.h
 *
 * Code generation for function 'mini_project'
 *
 */

#ifndef MINI_PROJECT_TYPES_H
#define MINI_PROJECT_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_vision_BlobAnalysis_1
#define struct_vision_BlobAnalysis_1

struct vision_BlobAnalysis_1
{
  int32_T S0_isInitialized;
  int16_T W0_N_PIXLIST_DW[230400];
  int16_T W1_M_PIXLIST_DW[230400];
  uint32_T W2_NUM_PIX_DW[50];
  uint8_T W3_PAD_DW[232404];
  uint32_T W4_STACK_DW[230400];
  int32_T P0_WALKER_RTP[8];
  uint32_T P1_MINAREA_RTP;
  uint32_T P2_MAXAREA_RTP;
};

#endif                                 /*struct_vision_BlobAnalysis_1*/

#ifndef typedef_vision_BlobAnalysis_1
#define typedef_vision_BlobAnalysis_1

typedef struct vision_BlobAnalysis_1 vision_BlobAnalysis_1;

#endif                                 /*typedef_vision_BlobAnalysis_1*/

#ifndef typedef_visioncodegen_BlobAnalysis
#define typedef_visioncodegen_BlobAnalysis

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  vision_BlobAnalysis_1 cSFunObject;
} visioncodegen_BlobAnalysis;

#endif                                 /*typedef_visioncodegen_BlobAnalysis*/

#ifndef typedef_mini_projectStackData
#define typedef_mini_projectStackData

typedef struct {
  struct {
    boolean_T bv0[230400];
  } f0;

  struct {
    real32_T frame[691200];
    visioncodegen_BlobAnalysis blobAnalysis;
    boolean_T foreground[230400];
    boolean_T filteredForeground[230400];
  } f1;
} mini_projectStackData;

#endif                                 /*typedef_mini_projectStackData*/

#ifndef typedef_vision_ForegroundDetector
#define typedef_vision_ForegroundDetector

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T LearningRate;
  real_T Time;
  boolean_T hasConstructed;
  void * pForegroundDetector;
} vision_ForegroundDetector;

#endif                                 /*typedef_vision_ForegroundDetector*/

#ifndef struct_vision_VideoFileReader_0
#define struct_vision_VideoFileReader_0

struct vision_VideoFileReader_0
{
  int32_T S0_isInitialized;
  real_T W0_HostLib[137];
  real_T W1_AudioInfo[5];
  real_T W2_VideoInfo[11];
  uint32_T W3_LoopCount;
  uint8_T P0_PLUGIN_PATH[116];
  uint8_T P1_CONVERTER_PATH[98];
  boolean_T O1_Y1;
  boolean_T O2_Y2;
};

#endif                                 /*struct_vision_VideoFileReader_0*/

#ifndef typedef_vision_VideoFileReader_0
#define typedef_vision_VideoFileReader_0

typedef struct vision_VideoFileReader_0 vision_VideoFileReader_0;

#endif                                 /*typedef_vision_VideoFileReader_0*/
#endif

/* End of code generation (mini_project_types.h) */
