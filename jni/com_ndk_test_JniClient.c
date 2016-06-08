#include "com_ndk_test_JniClient.h"
#include <stdlib.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif
/*
* Class: com_ndk_test_JniClient
* Method: AddStr
* Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_com_ndk_test_JniClient_AddStr
(JNIEnv *env, jclass arg, jstring instringA, jstring instringB)
{
jstring str = (*env)->NewStringUTF(env, "HelloWorld from JNI !");
return str;
}

/*
* Class: com_ndk_test_JniClient
* Method: AddInt
* Signature: (II)I
*/
JNIEXPORT jint JNICALL Java_com_ndk_test_JniClient_AddInt
(JNIEnv *env, jclass arg, jint a, jint b)
{
return a + b;
}

#ifdef __cplusplus
}
#endif
