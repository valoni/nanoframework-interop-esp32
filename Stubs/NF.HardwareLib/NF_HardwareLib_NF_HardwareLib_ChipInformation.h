//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------

#ifndef _NF_HARDWARELIB_NF_HARDWARELIB_NF_HARDWARELIB_CHIPINFORMATION_H_
#define _NF_HARDWARELIB_NF_HARDWARELIB_NF_HARDWARELIB_CHIPINFORMATION_H_

namespace NF_HardwareLib
{
    namespace NF_HardwareLib
    {
        struct ChipInformation
        {
            // Helper Functions to access fields of managed object
            // Declaration of stubs. These functions are implemented by Interop code developers

            static void NativeGetFlashInfo( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr );

            static void NativeGetFeatures( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr );

            static void NativeGetRevisionNumber( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr );

            static void NativeGetChipId( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr );

        };
    }
}

#endif //_NF_HARDWARELIB_NF_HARDWARELIB_NF_HARDWARELIB_CHIPINFORMATION_H_
