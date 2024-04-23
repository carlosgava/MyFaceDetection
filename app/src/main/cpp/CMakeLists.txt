cmake_minimum_required(VERSION 3.29.2)
project("facedetection")

set(OpenCV_DIR "/Users/gava/Downloads/OpenCV-android-sdk/sdk/native")

include_directories(${OpenCV_DIR}/jni/include)
add_library(lib_opencv SHARED IMPORTED)
set_target_properties(lib_opencv PROPERTIES IMPORTED_LOCATION ${OpenCV_DIR}/libs/${ANDROID_ABI}/libopencv_java4.so)

add_library(
        ${CMAKE_PROJECT_NAME} SHARED
        DetectionBasedTracker.cpp
)

target_link_libraries(
        ${CMAKE_PROJECT_NAME}
        lib_opencv
        android
        log
)