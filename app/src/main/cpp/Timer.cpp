//
// Created by Sean Zhou on 2019-07-01.
//

#include <jni.h>
#include <string>
#include <sstream>
#include <android/log.h>
#include "base/timer.h"
#include "matrix/sparse-matrix.h"
#include "matrix/compressed-matrix.h"

extern "C" {
/*
 * Class:     com_rayworks_sample_kaldidroiddemo_kaldi_KaldiWrapper
 * Method:    testTimer
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rayworks_sample_kaldidroiddemo_kaldi_KaldiWrapper_testTimer
        (JNIEnv *env, jobject) {
    std::string hello = "Hello from C++";
    kaldi::Timer timer = kaldi::Timer();

    double interval = timer.Elapsed();

    std::stringstream ss;
    ss << hello << " interval:" << interval;
    std::string str = ss.str();

    __android_log_print(ANDROID_LOG_INFO, "Timer", ">>> msg : %s", str.c_str());

    kaldi::CompressedMatrix cm = kaldi::CompressedMatrix();

    return env->NewStringUTF(str.c_str());
}

}