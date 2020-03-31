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

#include "NF_HardwareLib.h"
#include "NF_HardwareLib_NF_HardwareLib_ChipInformation.h"
#include "esp_system.h"

using namespace NF_HardwareLib::NF_HardwareLib;


void ChipInformation::NativeGetFlashInfo( CLR_RT_TypedArray_UINT8 param, HRESULT &hr )
{

    (void)param;
    (void)hr;


    ////////////////////////////////
    // implementation starts here //    
     
	char buffer [50];
	    
	int n=0;	  
  
    esp_chip_info_t chip_info;
	
    esp_chip_info(&chip_info);
    
    n =  sprintf (buffer, "ESP32 chip with %dMB %s flash", spi_flash_get_chip_size() / (1024 * 1024),
            (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");
        
    memcpy((void*)param.GetBuffer(), buffer, n);

    // implementation ends here   //    
    ////////////////////////////////


}

void ChipInformation::NativeGetFeatures( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr )
{

    (void)param0;
    (void)hr;


    ////////////////////////////////
    // implementation starts here //    
    char buffer [50];
    
	int n=0;	  
  
    esp_chip_info_t chip_info;
	
    esp_chip_info(&chip_info);
       
	n =  sprintf (buffer,"ESP32 chip with %d CPU cores ", chip_info.cores);
          
    memcpy((void*)param0.GetBuffer(), buffer, n);
    
	// implementation ends here   //    
    ////////////////////////////////

}

void ChipInformation::NativeGetRevisionNumber( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr )
{

    (void)param0;
    (void)hr;


    ////////////////////////////////
    // implementation starts here // 

char buffer [50];
    
	int n=0;	  
  
    esp_chip_info_t chip_info;
	
    esp_chip_info(&chip_info);
       
	n =  sprintf (buffer,"Revision number %d ", chip_info.revision);	
          
    memcpy((void*)param0.GetBuffer(), buffer, n);

    // implementation ends here   //    
    ////////////////////////////////


}

void ChipInformation::NativeGetChipId( CLR_RT_TypedArray_UINT8 param0, HRESULT &hr )
{

    (void)param0;
    (void)hr;


    ////////////////////////////////
    // implementation starts here //    
    char buffer [50];
	int n=0;	
	
    uint8_t chipid[6] = {0};
    
	esp_efuse_mac_get_default(chipid);
       
	n =  sprintf (buffer,"Chip ID %02x%02x%02x ", chipid[3], chipid[4], chipid[5]);	
          
    memcpy((void*)param0.GetBuffer(), buffer, n);

    // implementation ends here   //    
    ////////////////////////////////


}