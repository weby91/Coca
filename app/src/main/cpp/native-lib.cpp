#include <jni.h>

jint number = 1;

extern "C" JNIEXPORT jint
JNICALL Java_coca_webster_com_coca_MainActivity_incrementNum(JNIEnv *env, jobject obj) {
    return number++;  //or anything that can be cast to a jint
}

