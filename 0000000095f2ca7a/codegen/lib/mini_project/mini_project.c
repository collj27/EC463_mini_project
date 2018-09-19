/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mini_project.c
 *
 * Code generation for function 'mini_project'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "SystemCore.h"
#include "imopen.h"
#include "step.h"
#include "matlabCodegenHandle.h"
#include "BlobAnalysis.h"
#include "ForegroundDetector.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Type Definitions */
#ifndef struct_emxArray_int32_T_50x4
#define struct_emxArray_int32_T_50x4

struct emxArray_int32_T_50x4
{
  int data[200];
  int size[2];
};

#endif                                 /*struct_emxArray_int32_T_50x4*/

#ifndef typedef_emxArray_int32_T_50x4
#define typedef_emxArray_int32_T_50x4

typedef struct emxArray_int32_T_50x4 emxArray_int32_T_50x4;

#endif                                 /*typedef_emxArray_int32_T_50x4*/

/* Function Definitions */
void mini_project(void)
{
  static visioncodegen_BlobAnalysis blobAnalysis;
  vision_ForegroundDetector foregroundDetector;
  vision_VideoFileReader_0 videoReader;
  int exitg1;
  boolean_T d;
  static float frame[691200];
  boolean_T b0;
  static boolean_T foreground[230400];
  static boolean_T filteredForeground[230400];
  char *sErr;
  emxArray_int32_T_50x4 b_blobAnalysis;
  blobAnalysis.matlabCodegenIsDeleted = true;
  foregroundDetector.matlabCodegenIsDeleted = true;

  /*  import video and initialize foreground detector */
  c_ForegroundDetector_Foreground(&foregroundDetector);
  Constructor(&videoReader);

  /*  morphological filter for noise removal */
  /*  rejects objects less than 150 pixesl */
  BlobAnalysis_BlobAnalysis(&blobAnalysis);

  /*  cars in previous frame */
  do {
    exitg1 = 0;
    d = videoReader.O2_Y2;
    if (!d) {
      if (videoReader.S0_isInitialized != 1) {
        videoReader.S0_isInitialized = 1;
        Start(&videoReader);
        InitializeConditions(&videoReader);
      }

      Outputs(&videoReader, frame, &d, &b0);

      /*  read the next video frame */
      /*  Detect the foreground in the current video frame */
      SystemCore_step(&foregroundDetector, frame, foreground);

      /*  Use morphological opening to remove noise in the foreground */
      imopen(foreground, filteredForeground);

      /*  Detect the connected components with the specified minimum area, and */
      /*  compute their bounding boxes */
      b_SystemCore_step(&blobAnalysis, filteredForeground, b_blobAnalysis.data,
                        b_blobAnalysis.size);

      /*  Draw bounding boxes around the detected cars */
      /* result = insertShape(frame, 'Rectangle', bbox, 'Color', 'green'); */
      /*  Display the number of cars found in the video frame */
      /*  cars in frame */
      /*  need to initialzie; */
      /* result = insertText(result, [10 10], numcars, 'BoxOpacity', 1, ... */
      /*    'FontSize', 14); */
      /* step(videoPlayer, result);  % display the results */
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* fprintf('number of cars: %d \n',numcars) % should be 7 */
  /* System object Destructor function: vision.VideoFileReader */
  if (videoReader.S0_isInitialized == 1) {
    videoReader.S0_isInitialized = 2;

    /* System object Terminate function: vision.VideoFileReader */
    sErr = GetErrorBuffer(&videoReader.W0_HostLib[0U]);
    LibTerminate(&videoReader.W0_HostLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&videoReader.W0_HostLib[0U], 0);
    DestroyHostLibrary(&videoReader.W0_HostLib[0U]);
  }

  /*  close the video file */
  c_matlabCodegenHandle_matlabCod(&foregroundDetector);
  Destructor(&videoReader);
  d_matlabCodegenHandle_matlabCod(&blobAnalysis);
}

/* End of code generation (mini_project.c) */
