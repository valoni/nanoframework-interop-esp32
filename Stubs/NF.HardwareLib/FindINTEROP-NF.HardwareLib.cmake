#
# Copyright(c) 2020 The nanoFramework project contributors
# See LICENSE file in the project root for full license information.
#

########################################################################################
# make sure that a valid path is set bellow                                            #
# this is an Interop module so this file should be placed in the CMakes module folder  #
# usually CMake\Modules                                                                #
########################################################################################

# native code directory
set(BASE_PATH_FOR_THIS_MODULE ${PROJECT_SOURCE_DIR}/InteropAssemblies/NF.HardwareLib)


# set include directories
list(APPEND NF.HardwareLib_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/CLR/Core)
list(APPEND NF.HardwareLib_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/CLR/Include)
list(APPEND NF.HardwareLib_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/HAL/Include)
list(APPEND NF.HardwareLib_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/PAL/Include)
list(APPEND NF.HardwareLib_INCLUDE_DIRS ${BASE_PATH_FOR_THIS_MODULE})


# source files
set(NF.HardwareLib_SRCS

    NF_HardwareLib.cpp


    NF_HardwareLib_NF_HardwareLib_ChipInformation_mshl.cpp
    NF_HardwareLib_NF_HardwareLib_ChipInformation.cpp

)

foreach(SRC_FILE ${NF.HardwareLib_SRCS})

    set(NF.HardwareLib_SRC_FILE SRC_FILE-NOTFOUND)
    find_file(NF.HardwareLib_SRC_FILE ${SRC_FILE}
        PATHS
	        "${BASE_PATH_FOR_THIS_MODULE}"
	        "${TARGET_BASE_LOCATION}"

	    CMAKE_FIND_ROOT_PATH_BOTH
    )
# message("${SRC_FILE} >> ${NF.HardwareLib_SRC_FILE}") # debug helper
list(APPEND NF.HardwareLib_SOURCES ${NF.HardwareLib_SRC_FILE})
endforeach()

include(FindPackageHandleStandardArgs)

FIND_PACKAGE_HANDLE_STANDARD_ARGS(NF.HardwareLib DEFAULT_MSG NF.HardwareLib_INCLUDE_DIRS NF.HardwareLib_SOURCES)
