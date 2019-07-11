#
# Variable Precision Test
#

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(vp_test 
  vp_test.cpp
)

target_link_libraries(vp_test vp)
target_link_libraries(vp_test ${LIBS})