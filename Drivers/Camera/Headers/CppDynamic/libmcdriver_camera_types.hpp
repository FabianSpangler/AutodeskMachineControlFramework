/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Autodesk Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++-Header file with basic types in
order to allow an easy use of MC Driver Camera

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVER_CAMERA_TYPES_HEADER_CPP
#define __LIBMCDRIVER_CAMERA_TYPES_HEADER_CPP


/*************************************************************************************************************************
 Scalar types definition
**************************************************************************************************************************/

#ifdef LIBMCDRIVER_CAMERA_USELEGACYINTEGERTYPES

typedef unsigned char LibMCDriver_Camera_uint8;
typedef unsigned short LibMCDriver_Camera_uint16 ;
typedef unsigned int LibMCDriver_Camera_uint32;
typedef unsigned long long LibMCDriver_Camera_uint64;
typedef char LibMCDriver_Camera_int8;
typedef short LibMCDriver_Camera_int16;
typedef int LibMCDriver_Camera_int32;
typedef long long LibMCDriver_Camera_int64;

#else // LIBMCDRIVER_CAMERA_USELEGACYINTEGERTYPES

#include <stdint.h>

typedef uint8_t LibMCDriver_Camera_uint8;
typedef uint16_t LibMCDriver_Camera_uint16;
typedef uint32_t LibMCDriver_Camera_uint32;
typedef uint64_t LibMCDriver_Camera_uint64;
typedef int8_t LibMCDriver_Camera_int8;
typedef int16_t LibMCDriver_Camera_int16;
typedef int32_t LibMCDriver_Camera_int32;
typedef int64_t LibMCDriver_Camera_int64 ;

#endif // LIBMCDRIVER_CAMERA_USELEGACYINTEGERTYPES

typedef float LibMCDriver_Camera_single;
typedef double LibMCDriver_Camera_double;

/*************************************************************************************************************************
 General type definitions
**************************************************************************************************************************/

typedef LibMCDriver_Camera_int32 LibMCDriver_CameraResult;
typedef void * LibMCDriver_CameraHandle;
typedef void * LibMCDriver_Camera_pvoid;

/*************************************************************************************************************************
 Version for LibMCDriver_Camera
**************************************************************************************************************************/

#define LIBMCDRIVER_CAMERA_VERSION_MAJOR 1
#define LIBMCDRIVER_CAMERA_VERSION_MINOR 0
#define LIBMCDRIVER_CAMERA_VERSION_MICRO 0
#define LIBMCDRIVER_CAMERA_VERSION_PRERELEASEINFO ""
#define LIBMCDRIVER_CAMERA_VERSION_BUILDINFO ""

/*************************************************************************************************************************
 Error constants for LibMCDriver_Camera
**************************************************************************************************************************/

#define LIBMCDRIVER_CAMERA_SUCCESS 0
#define LIBMCDRIVER_CAMERA_ERROR_NOTIMPLEMENTED 1
#define LIBMCDRIVER_CAMERA_ERROR_INVALIDPARAM 2
#define LIBMCDRIVER_CAMERA_ERROR_INVALIDCAST 3
#define LIBMCDRIVER_CAMERA_ERROR_BUFFERTOOSMALL 4
#define LIBMCDRIVER_CAMERA_ERROR_GENERICEXCEPTION 5
#define LIBMCDRIVER_CAMERA_ERROR_COULDNOTLOADLIBRARY 6
#define LIBMCDRIVER_CAMERA_ERROR_COULDNOTFINDLIBRARYEXPORT 7
#define LIBMCDRIVER_CAMERA_ERROR_INCOMPATIBLEBINARYVERSION 8
#define LIBMCDRIVER_CAMERA_ERROR_INVALIDSTATENAME 9
#define LIBMCDRIVER_CAMERA_ERROR_DRIVERERROR 1000
#define LIBMCDRIVER_CAMERA_ERROR_ITERATORERROR 1001

/*************************************************************************************************************************
 Error strings for LibMCDriver_Camera
**************************************************************************************************************************/

inline const char * LIBMCDRIVER_CAMERA_GETERRORSTRING (LibMCDriver_CameraResult nErrorCode) {
  switch (nErrorCode) {
    case LIBMCDRIVER_CAMERA_SUCCESS: return "no error";
    case LIBMCDRIVER_CAMERA_ERROR_NOTIMPLEMENTED: return "functionality not implemented";
    case LIBMCDRIVER_CAMERA_ERROR_INVALIDPARAM: return "an invalid parameter was passed";
    case LIBMCDRIVER_CAMERA_ERROR_INVALIDCAST: return "a type cast failed";
    case LIBMCDRIVER_CAMERA_ERROR_BUFFERTOOSMALL: return "a provided buffer is too small";
    case LIBMCDRIVER_CAMERA_ERROR_GENERICEXCEPTION: return "a generic exception occurred";
    case LIBMCDRIVER_CAMERA_ERROR_COULDNOTLOADLIBRARY: return "the library could not be loaded";
    case LIBMCDRIVER_CAMERA_ERROR_COULDNOTFINDLIBRARYEXPORT: return "a required exported symbol could not be found in the library";
    case LIBMCDRIVER_CAMERA_ERROR_INCOMPATIBLEBINARYVERSION: return "the version of the binary interface does not match the bindings interface";
    case LIBMCDRIVER_CAMERA_ERROR_INVALIDSTATENAME: return "invalid state name";
    case LIBMCDRIVER_CAMERA_ERROR_DRIVERERROR: return "a driver error occured";
    case LIBMCDRIVER_CAMERA_ERROR_ITERATORERROR: return "iterator does not point at valid object.";
    default: return "unknown error";
  }
}

/*************************************************************************************************************************
 Declaration of handle classes 
**************************************************************************************************************************/

typedef LibMCDriver_CameraHandle LibMCDriver_Camera_Base;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_Driver;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_Iterator;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_PNGImage;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_Driver_Camera;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_RaspiCameraDevice;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_RaspiCameraDeviceIterator;
typedef LibMCDriver_CameraHandle LibMCDriver_Camera_Driver_RaspiCamera;

namespace LibMCDriver_Camera {

  /*************************************************************************************************************************
   Declaration of enums
  **************************************************************************************************************************/
  
  enum class eImagePixelFormat : LibMCDriver_Camera_int32 {
    Unknown = 0,
    RGB32 = 1,
    Grayscale32 = 2
  };
  
} // namespace LibMCDriver_Camera;

// define legacy C-names for enums, structs and function types
typedef LibMCDriver_Camera::eImagePixelFormat eLibMCDriver_CameraImagePixelFormat;

#endif // __LIBMCDRIVER_CAMERA_TYPES_HEADER_CPP