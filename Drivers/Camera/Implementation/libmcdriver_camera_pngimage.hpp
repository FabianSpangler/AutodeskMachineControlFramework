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


Abstract: This is the class declaration of CPNGImage

*/


#ifndef __LIBMCDRIVER_CAMERA_PNGIMAGE
#define __LIBMCDRIVER_CAMERA_PNGIMAGE

#include "libmcdriver_camera_interfaces.hpp"

// Parent classes
#include "libmcdriver_camera_base.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4250)
#endif

// Include custom headers here.


namespace LibMCDriver_Camera {
namespace Impl {


/*************************************************************************************************************************
 Class declaration of CPNGImage 
**************************************************************************************************************************/

class CPNGImage : public virtual IPNGImage, public virtual CBase {
private:


protected:

    uint32_t m_nWidth;
    uint32_t m_nHeight;
    eImagePixelFormat m_ePixelFormat;

    std::vector <uint8_t> m_BinaryData;

public:

    CPNGImage(uint32_t nWidth, uint32_t nHeight, eImagePixelFormat ePixelFormat);

	LibMCDriver_Camera_uint64 GetWidth() override;

	LibMCDriver_Camera_uint64 GetHeight() override;

	LibMCDriver_Camera::eImagePixelFormat GetPixelFormat() override;

	void GetRawData(LibMCDriver_Camera_uint64 nPNGDataBufferSize, LibMCDriver_Camera_uint64* pPNGDataNeededCount, LibMCDriver_Camera_uint8 * pPNGDataBuffer) override;

	std::string SaveToFile() override;

    std::vector <uint8_t> & getBinaryData ();

};

} // namespace Impl
} // namespace LibMCDriver_Camera

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#endif // __LIBMCDRIVER_CAMERA_PNGIMAGE
