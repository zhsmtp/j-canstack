/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class can_interfaces_vector_jni_Jvxlapi */

#ifndef _Included_can_interfaces_vector_jni_Jvxlapi
#define _Included_can_interfaces_vector_jni_Jvxlapi
#ifdef __cplusplus
extern "C" {
#endif
#undef can_interfaces_vector_jni_Jvxlapi_XL_BUS_TYPE_CAN
#define can_interfaces_vector_jni_Jvxlapi_XL_BUS_TYPE_CAN 1L
#undef can_interfaces_vector_jni_Jvxlapi_XL_INTERFACE_VERSION
#define can_interfaces_vector_jni_Jvxlapi_XL_INTERFACE_VERSION 3L
#undef can_interfaces_vector_jni_Jvxlapi_XL_INTERFACE_VERSION_V4
#define can_interfaces_vector_jni_Jvxlapi_XL_INTERFACE_VERSION_V4 4L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_STD
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_STD 1L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_EXT
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_EXT 2L
#undef can_interfaces_vector_jni_Jvxlapi_XL_ERR_QUEUE_IS_EMPTY
#define can_interfaces_vector_jni_Jvxlapi_XL_ERR_QUEUE_IS_EMPTY 10L
#undef can_interfaces_vector_jni_Jvxlapi_XL_RECEIVE_MSG
#define can_interfaces_vector_jni_Jvxlapi_XL_RECEIVE_MSG 1L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_EV_TAG_RX_OK
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_EV_TAG_RX_OK 1024L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_EV_TAG_TX_OK
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_EV_TAG_TX_OK 1028L
#undef can_interfaces_vector_jni_Jvxlapi_XL_TRANSMIT_MSG
#define can_interfaces_vector_jni_Jvxlapi_XL_TRANSMIT_MSG 10L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_EV_TAG_TX_MSG
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_EV_TAG_TX_MSG 1088L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_EXT_MSG_ID
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_EXT_MSG_ID -2147483648L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_MSG_FLAG_ERROR_FRAME
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_MSG_FLAG_ERROR_FRAME 1L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_MSG_FLAG_REMOTE_FRAME
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_MSG_FLAG_REMOTE_FRAME 16L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_MSG_FLAG_TX_COMPLETED
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_MSG_FLAG_TX_COMPLETED 64L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_TXMSG_FLAG_EDL
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_TXMSG_FLAG_EDL 1L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_TXMSG_FLAG_BRS
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_TXMSG_FLAG_BRS 2L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_TXMSG_FLAG_RTR
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_TXMSG_FLAG_RTR 16L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_EDL
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_EDL 1L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_BRS
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_BRS 2L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_ESI
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_ESI 4L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_RTR
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_RTR 16L
#undef can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_EF
#define can_interfaces_vector_jni_Jvxlapi_XL_CAN_RXMSG_FLAG_EF 512L
/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlOpenDriver
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlOpenDriver
  (JNIEnv *, jclass);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCloseDriver
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCloseDriver
  (JNIEnv *, jclass);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlGetDriverConfig
 * Signature: (Lcan/interfaces/vector/jni/XLdriverConfig;)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlGetDriverConfig
  (JNIEnv *, jclass, jobject);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlGetApplConfig
 * Signature: (Ljava/lang/String;I[I[I[II)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlGetApplConfig
  (JNIEnv *, jclass, jstring, jint, jintArray, jintArray, jintArray, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlGetChannelIndex
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlGetChannelIndex
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlOpenPort
 * Signature: ([JLjava/lang/String;J[JIII)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlOpenPort
  (JNIEnv *, jclass, jlongArray, jstring, jlong, jlongArray, jint, jint, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlGetSyncTime
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlGetSyncTime
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlClosePort
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlClosePort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlSetNotification
 * Signature: (J[JI)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlSetNotification
  (JNIEnv *, jclass, jlong, jlongArray, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanSetChannelMode
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanSetChannelMode
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlActivateChannel
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlActivateChannel
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlDeactivateChannel
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlDeactivateChannel
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanFdSetConfiguration
 * Signature: (JJLcan/interfaces/vector/jni/XLcanFdConf;)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanFdSetConfiguration
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlReceive
 * Signature: (J[I[Lcan/interfaces/vector/jni/XLevent;)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlReceive
  (JNIEnv *, jclass, jlong, jintArray, jobjectArray);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanReceive
 * Signature: (JLcan/interfaces/vector/jni/XLcanRxEvent;)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanReceive
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlGetErrorString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlGetErrorString
  (JNIEnv *, jclass, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanSetChannelBitrate
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanSetChannelBitrate
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanTransmit
 * Signature: (JJ[I[Lcan/interfaces/vector/jni/XLevent;)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanTransmit
  (JNIEnv *, jclass, jlong, jlong, jintArray, jobjectArray);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanTransmitEx
 * Signature: (JJI[I[Lcan/interfaces/vector/jni/XLcanTxEvent;)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanTransmitEx
  (JNIEnv *, jclass, jlong, jlong, jint, jintArray, jobjectArray);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanFlushTransmitQueue
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanFlushTransmitQueue
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanSetChannelAcceptance
 * Signature: (JJJJI)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanSetChannelAcceptance
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    xlCanResetAcceptance
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_xlCanResetAcceptance
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     can_interfaces_vector_jni_Jvxlapi
 * Method:    WaitForSingleObject
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_can_interfaces_vector_jni_Jvxlapi_WaitForSingleObject
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
