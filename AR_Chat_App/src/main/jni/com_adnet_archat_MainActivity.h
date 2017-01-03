/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#ifndef com_adnet_archat_MainActivity
#define com_adnet_archat_MainActivity

#ifdef __cplusplus
extern "C" {
#endif
#undef com_adnet_archat_MainActivity_BIND_ABOVE_CLIENT
#define com_adnet_archat_MainActivity_BIND_ABOVE_CLIENT 8L
#undef com_adnet_archat_MainActivity_BIND_ADJUST_WITH_ACTIVITY
#define com_adnet_archat_MainActivity_BIND_ADJUST_WITH_ACTIVITY 128L
#undef com_adnet_archat_MainActivity_BIND_ALLOW_OOM_MANAGEMENT
#define com_adnet_archat_MainActivity_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef com_adnet_archat_MainActivity_BIND_AUTO_CREATE
#define com_adnet_archat_MainActivity_BIND_AUTO_CREATE 1L
#undef com_adnet_archat_MainActivity_BIND_DEBUG_UNBIND
#define com_adnet_archat_MainActivity_BIND_DEBUG_UNBIND 2L
#undef com_adnet_archat_MainActivity_BIND_IMPORTANT
#define com_adnet_archat_MainActivity_BIND_IMPORTANT 64L
#undef com_adnet_archat_MainActivity_BIND_NOT_FOREGROUND
#define com_adnet_archat_MainActivity_BIND_NOT_FOREGROUND 4L
#undef com_adnet_archat_MainActivity_BIND_WAIVE_PRIORITY
#define com_adnet_archat_MainActivity_BIND_WAIVE_PRIORITY 32L
#undef com_adnet_archat_MainActivity_CONTEXT_IGNORE_SECURITY
#define com_adnet_archat_MainActivity_CONTEXT_IGNORE_SECURITY 2L
#undef com_adnet_archat_MainActivity_CONTEXT_INCLUDE_CODE
#define com_adnet_archat_MainActivity_CONTEXT_INCLUDE_CODE 1L
#undef com_adnet_archat_MainActivity_CONTEXT_RESTRICTED
#define com_adnet_archat_MainActivity_CONTEXT_RESTRICTED 4L
#undef com_adnet_archat_MainActivity_MODE_APPEND
#define com_adnet_archat_MainActivity_MODE_APPEND 32768L
#undef com_adnet_archat_MainActivity_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define com_adnet_archat_MainActivity_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef com_adnet_archat_MainActivity_MODE_MULTI_PROCESS
#define com_adnet_archat_MainActivity_MODE_MULTI_PROCESS 4L
#undef com_adnet_archat_MainActivity_MODE_PRIVATE
#define com_adnet_archat_MainActivity_MODE_PRIVATE 0L
#undef com_adnet_archat_MainActivity_MODE_WORLD_READABLE
#define com_adnet_archat_MainActivity_MODE_WORLD_READABLE 1L
#undef com_adnet_archat_MainActivity_MODE_WORLD_WRITEABLE
#define com_adnet_archat_MainActivity_MODE_WORLD_WRITEABLE 2L
#undef com_adnet_archat_MainActivity_DEFAULT_KEYS_DIALER
#define com_adnet_archat_MainActivity_DEFAULT_KEYS_DIALER 1L
#undef com_adnet_archat_MainActivity_DEFAULT_KEYS_DISABLE
#define com_adnet_archat_MainActivity_DEFAULT_KEYS_DISABLE 0L
#undef com_adnet_archat_MainActivity_DEFAULT_KEYS_SEARCH_GLOBAL
#define com_adnet_archat_MainActivity_DEFAULT_KEYS_SEARCH_GLOBAL 4L
#undef com_adnet_archat_MainActivity_DEFAULT_KEYS_SEARCH_LOCAL
#define com_adnet_archat_MainActivity_DEFAULT_KEYS_SEARCH_LOCAL 3L
#undef com_adnet_archat_MainActivity_DEFAULT_KEYS_SHORTCUT
#define com_adnet_archat_MainActivity_DEFAULT_KEYS_SHORTCUT 2L
#undef com_adnet_archat_MainActivity_RESULT_CANCELED
#define com_adnet_archat_MainActivity_RESULT_CANCELED 0L
#undef com_adnet_archat_MainActivity_RESULT_FIRST_USER
#define com_adnet_archat_MainActivity_RESULT_FIRST_USER 1L
#undef com_adnet_archat_MainActivity_RESULT_OK
#define com_adnet_archat_MainActivity_RESULT_OK -1L

/*
 * Class:     com_adnet_archat_MainActivity
 * Method:    predict
 * Signature: (Landroid/graphics/Bitmap;[B)V
 */

JNIEXPORT void JNICALL Java_com_adnet_archat_NativeFunc_UndoCMT(JNIEnv* env, jobject instance);

JNIEXPORT void JNICALL Java_com_adnet_archat_NativeFunc_ResetCMT(JNIEnv* env, jobject instance);

JNIEXPORT void JNICALL Java_com_adnet_archat_NativeFunc_getFeatureMat(JNIEnv* env, jobject,
jlong addrGray, jint imgWidth, jint imgHeight, jint displayWidth, jint displayHeight,
        jbyteArray yuvPlanes0, jint yuvStrides0);

JNIEXPORT void JNICALL Java_com_adnet_archat_NativeFunc_OpenCMT(JNIEnv* env, jobject,
jlong addrGray,jfloat x, jfloat y, jfloat width, jfloat height, jfloatArray pointArray, jint color);

JNIEXPORT void JNICALL Java_com_adnet_archat_NativeFunc_ProcessCMT(JNIEnv* env, jobject,
jlong markMatAddr, jint imgWidth, jint imgHeight, jint displayWidth, jint displayHeight,
        jbyteArray yuvPlanes0, jint yuvStrides0);

#ifdef __cplusplus
}
#endif
#endif
