//
// Created by Carlos Henrique Gava on 23/04/24.
//

#include <jni.h>
#ifndef MY_FACE_DETECTION_DETECTIONBASEDTRACKER_H
#define MY_FACE_DETECTION_DETECTIONBASEDTRACKER_H
extern "C" {
    JNIEXPORT jlong JNICALL Java_br_com_gservices_facedetection_DetectionBasedTracker_nativeCreateObject(JNIEnv *, jclass, jstring, jint);
    JNIEXPORT void JNICALL Java_br_com_gservices_facedetection_DetectionBasedTracker_nativeDestroyObject(JNIEnv *, jclass, jlong);
    JNIEXPORT void JNICALL Java_br_com_gservices_facedetection_DetectionBasedTracker_nativeStart(JNIEnv *, jclass, jlong);
    JNIEXPORT void JNICALL Java_br_com_gservices_facedetection_DetectionBasedTracker_nativeStop(JNIEnv *, jclass, jlong);
    JNIEXPORT void JNICALL Java_br_com_gservices_facedetection_DetectionBasedTracker_nativeSetFaceSize (JNIEnv *, jclass, jlong, jint);
    JNIEXPORT void JNICALL Java_br_com_gservices_facedetection_DetectionBasedTracker_nativeDetect (JNIEnv *, jclass, jlong, jlong, jlong);
};
#endif //MY_FACE_DETECTION_DETECTIONBASEDTRACKER_H
