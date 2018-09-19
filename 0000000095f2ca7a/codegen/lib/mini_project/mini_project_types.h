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
  int S0_isInitialized;
  short W0_N_PIXLIST_DW[230400];
  short W1_M_PIXLIST_DW[230400];
  unsigned int W2_NUM_PIX_DW[50];
  unsigned char W3_PAD_DW[232404];
  unsigned int W4_STACK_DW[230400];
  int P0_WALKER_RTP[8];
  unsigned int P1_MINAREA_RTP;
  unsigned int P2_MAXAREA_RTP;
};

#endif                                 /*struct_vision_BlobAnalysis_1*/

#ifndef typedef_vision_BlobAnalysis_1
#define typedef_vision_BlobAnalysis_1

typedef struct vision_BlobAnalysis_1 vision_BlobAnalysis_1;

#endif                                 /*typedef_vision_BlobAnalysis_1*/

#ifndef typedef_vision_ForegroundDetector
#define typedef_vision_ForegroundDetector

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int isInitialized;
  boolean_T isSetupComplete;
  double LearningRate;
  double Time;
  boolean_T hasConstructed;
  void * pForegroundDetector;
} vision_ForegroundDetector;

#endif                                 /*typedef_vision_ForegroundDetector*/

#ifndef struct_vision_VideoFileReader_0
#define struct_vision_VideoFileReader_0

struct vision_VideoFileReader_0
{
  int S0_isInitialized;
  double W0_HostLib[137];
  double W1_AudioInfo[5];
  double W2_VideoInfo[11];
  unsigned int W3_LoopCount;
  unsigned char P0_PLUGIN_PATH[116];
  unsigned char P1_CONVERTER_PATH[98];
  boolean_T O1_Y1;
  boolean_T O2_Y2;
};

#endif                                 /*struct_vision_VideoFileReader_0*/

#ifndef typedef_vision_VideoFileReader_0
#define typedef_vision_VideoFileReader_0

typedef struct vision_VideoFileReader_0 vision_VideoFileReader_0;

#endif                                 /*typedef_vision_VideoFileReader_0*/

#ifndef typedef_visioncodegen_BlobAnalysis
#define typedef_visioncodegen_BlobAnalysis

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int isInitialized;
  boolean_T isSetupComplete;
  vision_BlobAnalysis_1 cSFunObject;
} visioncodegen_BlobAnalysis;

#endif                                 /*typedef_visioncodegen_BlobAnalysis*/
#endif

/* End of code generation (mini_project_types.h) */
