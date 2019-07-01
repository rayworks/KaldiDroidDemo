//
// Created by Sean Zhou on 2019-07-01.
//

#include <jni.h>
#include <string>
#include <sstream>
#include "./include/timer.h"

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
    return env->NewStringUTF(str.c_str());
}

}