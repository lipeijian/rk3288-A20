/* DO NOT EDIT THIS FILE - it is machine generated */
#ifndef _Included_com_runmit_imagerecognition_utils_ImageUtils
#define _Included_com_runmit_imagerecognition_utils_ImageUtils
#include <jni.h>
#include <opencv2/opencv.hpp>

#ifdef __cplusplus
extern "C" {
#endif
#define LRMODEL 1
#define RLMODEL 2
#define TDMODEL 3
#define DTMODEL 4
#define SDMODEL 5
#define THRESHOLD 0.1

double calHist(IplImage* img1,IplImage* img2);
IplImage* splitImage(IplImage* src, int w, int h, int origX,int origY );
IplImage* change4channelTo3InIplImage(IplImage * src);
IplImage* changeArrayToGrayImage(int* cbuf, int h, int w);
#ifdef __cplusplus
}
#endif
#endif