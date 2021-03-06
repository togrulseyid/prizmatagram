/*
 * std_head.h
 *
 *  Created on: 26 iyn 2016
 *      Author: toghrul
 */

#ifndef STD_HEAD_H_
#define STD_HEAD_H_

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <errno.h>
#include <fcntl.h>

#include <jni.h>
//#include <omp.h>
#include <android/log.h>
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <opencv2/opencv.hpp>
#include <numeric>
#include <iomanip>
#include <stdint.h>


#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/videoio/videoio.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/highgui.hpp"



#include <opencv2/photo.hpp>
#include "opencv2/imgcodecs.hpp"
#include <opencv2/highgui.hpp>




#define LOG_TAG "NativeLog"

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

using namespace std;
using namespace cv;

enum Direction {
	ShiftUp = 1,
	ShiftRight,
	ShiftDown,
	ShiftLeft
};

void toGrayscale(cv::Mat& mat);
cv::Mat shiftFrame(cv::Mat frame, int pixels, Direction direction);

#endif /* STD_HEAD_H_ */
