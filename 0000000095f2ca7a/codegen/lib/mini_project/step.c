/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * step.c
 *
 * Code generation for function 'step'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "step.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Declarations */
static void b_Constructor(vision_VideoFileReader_0 **obj);

/* Function Definitions */
static void b_Constructor(vision_VideoFileReader_0 **obj)
{
  int i;
  static const unsigned char uv0[116] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 56U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 118U, 105U, 100U, 101U, 111U, 47U,
    108U, 105U, 98U, 109U, 119U, 118U, 105U, 100U, 101U, 111U, 102U, 105U, 108U,
    101U, 109U, 106U, 112U, 101U, 103U, 97U, 118U, 105U, 114U, 101U, 97U, 100U,
    101U, 114U, 112U, 108U, 117U, 103U, 105U, 110U, 46U, 100U, 121U, 108U, 105U,
    98U, 0U };

  static const unsigned char uv1[98] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 56U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 118U, 105U, 100U, 101U, 111U, 47U,
    118U, 105U, 100U, 101U, 111U, 114U, 101U, 97U, 100U, 101U, 114U, 115U, 108U,
    99U, 111U, 110U, 118U, 101U, 114U, 116U, 101U, 114U, 0U };

  /* System object Constructor function: vision.VideoFileReader */
  (*obj)->S0_isInitialized = 0;
  for (i = 0; i < 116; i++) {
    (*obj)->P0_PLUGIN_PATH[i] = uv0[i];
  }

  for (i = 0; i < 98; i++) {
    (*obj)->P1_CONVERTER_PATH[i] = uv1[i];
  }

  (*obj)->O2_Y2 = false;
}

vision_VideoFileReader_0 *Constructor(vision_VideoFileReader_0 *obj)
{
  vision_VideoFileReader_0 *b_obj;
  b_obj = obj;
  b_Constructor(&b_obj);
  return b_obj;
}

void Destructor(vision_VideoFileReader_0 *obj)
{
  char *sErr;

  /* System object Destructor function: vision.VideoFileReader */
  if (obj->S0_isInitialized == 1) {
    obj->S0_isInitialized = 2;

    /* System object Terminate function: vision.VideoFileReader */
    sErr = GetErrorBuffer(&obj->W0_HostLib[0U]);
    LibTerminate(&obj->W0_HostLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&obj->W0_HostLib[0U], 0);
    DestroyHostLibrary(&obj->W0_HostLib[0U]);
  }
}

void InitializeConditions(vision_VideoFileReader_0 *obj)
{
  /* System object Initialization function: vision.VideoFileReader */
  obj->O1_Y1 = false;
  obj->O2_Y2 = false;
  obj->W3_LoopCount = 0U;
  LibReset(&obj->W0_HostLib[0U]);
}

void Outputs(vision_VideoFileReader_0 *obj, float Y0[691200], boolean_T *Y1,
             boolean_T *Y2)
{
  char *sErr;
  void *source_R;

  /* System object Outputs function: vision.VideoFileReader */
  sErr = GetErrorBuffer(&obj->W0_HostLib[0U]);
  source_R = (void *)&Y0[0U];
  LibOutputs_FromMMFile(&obj->W0_HostLib[0U], (void *)&obj->O1_Y1,
                        GetNullPointer(), source_R, GetNullPointer(),
                        GetNullPointer());
  if (obj->O1_Y1) {
    obj->W3_LoopCount++;
    obj->O2_Y2 = !(obj->W3_LoopCount < 1U);
  }

  if (*sErr != 0) {
    PrintError(sErr);
  }

  *Y1 = obj->O1_Y1;
  *Y2 = obj->O2_Y2;
}

void Start(vision_VideoFileReader_0 *obj)
{
  char *sErr;

  /* System object Start function: vision.VideoFileReader */
  sErr = GetErrorBuffer(&obj->W0_HostLib[0U]);
  CreateHostLibrary("libmwfrommmfile.dylib", &obj->W0_HostLib[0U]);
  createAudioInfo(&obj->W1_AudioInfo[0U], 0U, 0U, 0.0, 0, 0, 0, 0,
                  GetNullPointer());
  createVideoInfo(&obj->W2_VideoInfo[0U], 1U, 29.970029970029969,
                  29.970029970029969, "RGB ", 1, 3, 640, 360, 1U, 1, 1,
                  GetNullPointer());
  if (*sErr == 0) {
    LibCreate_FromMMFile(&obj->W0_HostLib[0U], 0, (void *)
                         "/Applications/MATLAB_R2018a.app/toolbox/vision/visiondata/visiontraffic.avi",
                         1,
                         "/Applications/MATLAB_R2018a.app/toolbox/shared/multimedia/bin/maci64/video/libmwvideofilemjpegavireaderplugin.dylib",
                         "/Applications/MATLAB_R2018a.app/toolbox/shared/multimedia/bin/maci64/video/videoreaderslconverter",
                         &obj->W1_AudioInfo[0U], &obj->W2_VideoInfo[0U], 0U, 0U,
                         1U, 0U, 0U, 1U);
  }

  if (*sErr == 0) {
    LibStart(&obj->W0_HostLib[0U]);
  }

  if (*sErr != 0) {
    DestroyHostLibrary(&obj->W0_HostLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }
  }
}

/* End of code generation (step.c) */
