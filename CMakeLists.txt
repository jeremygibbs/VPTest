#
# Variable Precision Test
# 

# set cmake version and config file location
cmake_minimum_required (VERSION 3.1)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/config)

# install to the run directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BUILD_DIR})

#
# This code used C++ 11 and 14 features so enable these on CXX Flags
#
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set the precision of the build.
if(NOT FLOAT_TYPE)
  message(STATUS "Precision: Double (64-bits floats)")
else()
  string(STRIP ${FLOAT_TYPE} FLOAT_TYPE)
  string(TOLOWER ${FLOAT_TYPE} FLOAT_TYPE)
  if(FLOAT_TYPE STREQUAL "single")
    add_definitions("-DFLOAT_SINGLE")
    message(STATUS "Precision: Single (32-bits floats)")
  elseif(FLOAT_TYPE STREQUAL "double")
    message(STATUS "Precision: Double (64-bits floats)")
  else()
    message(FATAL_ERROR "Illegal FLOAT_TYPE specified.")
  endif()
endif()

file(GLOB_RECURSE HEADERS "include/*")
file(GLOB_RECURSE SOURCES "src/*")

include_directories("include" SYSTEM ${INCLUDE_DIRS})
link_libraries(${LIBS})

add_subdirectory(src)
add_subdirectory(main)