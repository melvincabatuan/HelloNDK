#include <string.h>
#include <jni.h>

jstring
Java_com_cabatuan_hellondk_Main_naGetHelloNDKStr(JNIEnv*
pEnv, jobject pObj)
{
return (*pEnv)->NewStringUTF(pEnv, "Hello Native!");
}