/**
* Copyright 2010 Mario Zechner (contact@badlogicgames.com)
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*   http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogic_gdx_audio_io_Mpg123Decoder */

#ifndef _Included_com_badlogic_gdx_audio_io_Mpg123Decoder
#define _Included_com_badlogic_gdx_audio_io_Mpg123Decoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    openFile
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_openFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    readSamples
 * Signature: (JLjava/nio/ShortBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_readSamples
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    skipSamples
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_skipSamples
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    getNumChannels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_getNumChannels
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    getRate
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_getRate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    getLength
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_getLength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_badlogic_gdx_audio_io_Mpg123Decoder
 * Method:    closeFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_audio_io_Mpg123Decoder_closeFile
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif