#include <jni.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_example_toastdemo_MainActivity_showChristmasToast(
        JNIEnv* env,
        jobject /* this */,
        jobject context) {

    jclass toastClass = env->FindClass("android/widget/Toast");
    if (toastClass == nullptr) return;

    jmethodID makeText = env->GetStaticMethodID(
            toastClass,
            "makeText",
            "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;");
    if (makeText == nullptr) {
        env->DeleteLocalRef(toastClass);
        return;
    }

    jstring message = env->NewStringUTF("Merry Christmas!");
    jobject toast = env->CallStaticObjectMethod(
            toastClass,
            makeText,
            context,
            message,
            0 /* Toast.LENGTH_SHORT */);

    if (toast != nullptr) {
        jmethodID show = env->GetMethodID(toastClass, "show", "()V");
        if (show != nullptr) {
            env->CallVoidMethod(toast, show);
        }
        env->DeleteLocalRef(toast);
    }

    env->DeleteLocalRef(message);
    env->DeleteLocalRef(toastClass);
}
