#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_yuh5_testopencvnative_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void

JNICALL
Java_com_example_yuh5_testopencvnative_EdgeDetection_detectEdges(
        JNIEnv *env,
        jobject /* this */, jlong gray) {

    cv::Mat &edges = *(cv::Mat *) gray;
    //cv::Canny(edges, edges, 50, 250);

    cv::medianBlur(edges, edges, 7);
}
