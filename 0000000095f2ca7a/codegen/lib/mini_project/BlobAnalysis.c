/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * BlobAnalysis.c
 *
 * Code generation for function 'BlobAnalysis'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "mini_project.h"
#include "BlobAnalysis.h"
#include "DAHostLib_rtw.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"

/* Function Declarations */
static void b_BlobAnalysis_BlobAnalysis(visioncodegen_BlobAnalysis **obj);

/* Function Definitions */
static void b_BlobAnalysis_BlobAnalysis(visioncodegen_BlobAnalysis **obj)
{
  int i;
  static const short iv0[8] = { -1, 361, 362, 363, 1, -361, -362, -363 };

  (*obj)->isInitialized = 0;

  /* System object Constructor function: vision.BlobAnalysis */
  for (i = 0; i < 8; i++) {
    (*obj)->cSFunObject.P0_WALKER_RTP[i] = iv0[i];
  }

  (*obj)->cSFunObject.P1_MINAREA_RTP = 150U;
  (*obj)->cSFunObject.P2_MAXAREA_RTP = MAX_uint32_T;
  (*obj)->matlabCodegenIsDeleted = false;
}

visioncodegen_BlobAnalysis *BlobAnalysis_BlobAnalysis(visioncodegen_BlobAnalysis
  *obj)
{
  visioncodegen_BlobAnalysis *b_obj;
  b_obj = obj;
  b_BlobAnalysis_BlobAnalysis(&b_obj);
  return b_obj;
}

void BlobAnalysis_outputImpl(visioncodegen_BlobAnalysis *obj, const boolean_T
  varargin_1[230400], int varargout_1_data[], int varargout_1_size[2])
{
  vision_BlobAnalysis_1 *b_obj;
  boolean_T maxNumBlobsReached;
  int loop;
  unsigned char currentLabel;
  int i;
  int idx;
  int n;
  int m;
  unsigned int pixIdx;
  int pixListMinc;
  unsigned int padIdx;
  unsigned int start_pixIdx;
  int minr;
  int maxc;
  int maxr;
  int j;
  unsigned int centerIdx;
  unsigned int walkerIdx;
  b_obj = &obj->cSFunObject;

  /* System object Outputs function: vision.BlobAnalysis */
  maxNumBlobsReached = false;
  for (loop = 0; loop < 363; loop++) {
    b_obj->W3_PAD_DW[loop] = 0U;
  }

  currentLabel = 1U;
  i = 0;
  idx = 363;
  for (n = 0; n < 640; n++) {
    for (m = 0; m < 360; m++) {
      if (varargin_1[i]) {
        b_obj->W3_PAD_DW[idx] = MAX_uint8_T;
      } else {
        b_obj->W3_PAD_DW[idx] = 0U;
      }

      i++;
      idx++;
    }

    b_obj->W3_PAD_DW[idx] = 0U;
    b_obj->W3_PAD_DW[idx + 1] = 0U;
    idx += 2;
  }

  for (loop = 0; loop < 361; loop++) {
    b_obj->W3_PAD_DW[loop + idx] = 0U;
  }

  loop = 1;
  pixIdx = 0U;
  n = 0;
  while (n < 640) {
    idx = 1;
    pixListMinc = loop * 362;
    m = 0;
    while (m < 360) {
      padIdx = (unsigned int)(pixListMinc + idx);
      start_pixIdx = pixIdx;
      if (b_obj->W3_PAD_DW[padIdx] == 255) {
        b_obj->W3_PAD_DW[padIdx] = currentLabel;
        b_obj->W0_N_PIXLIST_DW[pixIdx] = (short)(loop - 1);
        b_obj->W1_M_PIXLIST_DW[pixIdx] = (short)(idx - 1);
        pixIdx++;
        b_obj->W2_NUM_PIX_DW[currentLabel - 1] = 1U;
        b_obj->W4_STACK_DW[0U] = padIdx;
        padIdx = 1U;
        while (padIdx != 0U) {
          padIdx--;
          centerIdx = b_obj->W4_STACK_DW[padIdx];
          for (i = 0; i < 8; i++) {
            walkerIdx = centerIdx + b_obj->P0_WALKER_RTP[i];
            if (b_obj->W3_PAD_DW[walkerIdx] == 255) {
              b_obj->W3_PAD_DW[walkerIdx] = currentLabel;
              b_obj->W0_N_PIXLIST_DW[pixIdx] = (short)((short)(walkerIdx / 362U)
                - 1);
              b_obj->W1_M_PIXLIST_DW[pixIdx] = (short)(walkerIdx % 362U - 1U);
              pixIdx++;
              b_obj->W2_NUM_PIX_DW[currentLabel - 1]++;
              b_obj->W4_STACK_DW[padIdx] = walkerIdx;
              padIdx++;
            }
          }
        }

        if ((b_obj->W2_NUM_PIX_DW[currentLabel - 1] < b_obj->P1_MINAREA_RTP) ||
            (b_obj->W2_NUM_PIX_DW[currentLabel - 1] > b_obj->P2_MAXAREA_RTP)) {
          currentLabel--;
          pixIdx = start_pixIdx;
        }

        if (currentLabel == 50) {
          maxNumBlobsReached = true;
          n = 640;
          m = 360;
        }

        if (m < 360) {
          currentLabel++;
        }
      }

      idx++;
      m++;
    }

    loop++;
    n++;
  }

  if (maxNumBlobsReached) {
    idx = currentLabel;
  } else {
    idx = (unsigned char)(currentLabel - 1U);
  }

  pixListMinc = 0;
  n = 0;
  for (i = 0; i < idx; i++) {
    m = 640;
    minr = 360;
    maxc = 0;
    maxr = 0;
    for (j = 0; j < (int)b_obj->W2_NUM_PIX_DW[i]; j++) {
      loop = j + n;
      if (b_obj->W0_N_PIXLIST_DW[loop] < m) {
        m = b_obj->W0_N_PIXLIST_DW[loop];
      }

      if (b_obj->W0_N_PIXLIST_DW[loop] > maxc) {
        maxc = b_obj->W0_N_PIXLIST_DW[loop];
      }

      loop = j + pixListMinc;
      if (b_obj->W1_M_PIXLIST_DW[loop] < minr) {
        minr = b_obj->W1_M_PIXLIST_DW[loop];
      }

      if (b_obj->W1_M_PIXLIST_DW[loop] > maxr) {
        maxr = b_obj->W1_M_PIXLIST_DW[loop];
      }
    }

    varargout_1_data[i] = m + 1;
    varargout_1_data[(unsigned int)idx + i] = minr + 1;
    varargout_1_data[(idx << 1) + i] = (maxc - m) + 1;
    varargout_1_data[3 * idx + i] = (maxr - minr) + 1;
    pixListMinc += (int)b_obj->W2_NUM_PIX_DW[i];
    n += (int)b_obj->W2_NUM_PIX_DW[i];
  }

  varargout_1_size[0] = idx;
  varargout_1_size[1] = 4;
}

/* End of code generation (BlobAnalysis.c) */
