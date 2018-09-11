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
#include "ForegroundDetector.h"
#include "step.h"
#include "BlobAnalysis.h"
#include "imopen.h"
#include "SystemCore.h"
#include "matlabCodegenHandle.h"
#include "mini_project_data.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 7,   /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 11,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 14,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 23,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 26,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 29,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 33,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 60,  /* lineNo */
  "mini_project",                      /* fcnName */
  "/Users/james/Desktop/EC463_mini_project/0000000095f2ca7a/mini_project.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 55,  /* lineNo */
  5,                                   /* colNo */
  "step",                              /* fName */
  "/Applications/MATLAB_R2018a.app/toolbox/eml/lib/scomp/step.m"/* pName */
};

/* Function Definitions */
void mini_project(mini_projectStackData *SD, const emlrtStack *sp)
{
  vision_ForegroundDetector foregroundDetector;
  vision_VideoFileReader_0 videoReader;
  int32_T past_frame;
  int32_T exitg1;
  boolean_T d;
  boolean_T b0;
  char_T *sErr;
  int32_T bbox_data[200];
  int32_T bbox_size[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emlrtPushHeapReferenceStackR2018a(sp, (void *)&SD->f1.blobAnalysis, (void (*)(
    const void *, void *))d_matlabCodegenHandle_matlabCod);
  SD->f1.blobAnalysis.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2018a(sp, (void *)&foregroundDetector, (void (*)(
    const void *, void *))c_matlabCodegenHandle_matlabCod);
  foregroundDetector.matlabCodegenIsDeleted = true;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);

  /*  import video and initialize foreground detector */
  st.site = &emlrtRSI;
  c_ForegroundDetector_Foreground(&foregroundDetector);
  st.site = &b_emlrtRSI;
  Constructor(&videoReader);

  /* videoPlayer = vision.VideoPlayer('Name', 'Detected Cars'); */
  /*  morphological filter for noise removal */
  st.site = &c_emlrtRSI;

  /*  rejects objects less than 150 pixesl */
  st.site = &d_emlrtRSI;
  BlobAnalysis_BlobAnalysis(&SD->f1.blobAnalysis);
  past_frame = 0;

  /*  cars in previous frame */
  /* t = 0; */
  do {
    exitg1 = 0;
    d = videoReader.O2_Y2;
    if (covrtLogWhile(&emlrtCoverageInstance, 0U, 0U, 0, !d)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
      st.site = &e_emlrtRSI;
      if (videoReader.S0_isInitialized != 1) {
        if (videoReader.S0_isInitialized == 2) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen",
            "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
        }

        videoReader.S0_isInitialized = 1;
        Start(&videoReader);
        InitializeConditions(&videoReader);
      }

      Outputs(&videoReader, SD->f1.frame, &d, &b0);

      /*  read the next video frame */
      /*  Detect the foreground in the current video frame */
      st.site = &f_emlrtRSI;
      SystemCore_step(&st, &foregroundDetector, SD->f1.frame, SD->f1.foreground);

      /*  Use morphological opening to remove noise in the foreground */
      st.site = &g_emlrtRSI;
      imopen(SD, SD->f1.foreground, SD->f1.filteredForeground);

      /*  Detect the connected components with the specified minimum area, and */
      /*  compute their bounding boxes */
      st.site = &h_emlrtRSI;
      b_SystemCore_step(&st, &SD->f1.blobAnalysis, SD->f1.filteredForeground,
                        bbox_data, bbox_size);

      /*  Draw bounding boxes around the detected cars */
      /* result = insertShape(frame, 'Rectangle', bbox, 'Color', 'green'); */
      /*  Display the number of cars found in the video frame */
      /*  cars in frame */
      /* scatter(t,cars_frame) */
      /* hold on */
      /* t = t+1; */
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, bbox_size[0] >
                     past_frame)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2U);

        /* fprintf('cars_frame: %d past_frame: %d numcars: %d \n' ,cars_frame, past_frame, numcars) */
        /* elseif (cars_frame < past_frame) || (cars_frame == past_frame) */
        /*    numcars = numcars; */
      }

      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3U);
      past_frame = bbox_size[0];

      /*  need to initialzie; */
      /* result = insertText(result, [10 10], numcars, 'BoxOpacity', 1, ... */
      /*    'FontSize', 14); */
      /* step(videoPlayer, result);  % display the results */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4U);

  /* fprintf('number of cars: %d \n',numcars) % should be 7 */
  st.site = &i_emlrtRSI;

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
  st.site = &emlrtRSI;
  c_matlabCodegenHandle_matlabCod(&st, &foregroundDetector);
  st.site = &b_emlrtRSI;
  Destructor(&videoReader);
  st.site = &d_emlrtRSI;
  d_matlabCodegenHandle_matlabCod(&st, &SD->f1.blobAnalysis);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mini_project.c) */
