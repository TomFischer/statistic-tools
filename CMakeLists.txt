PROJECT (statistics)
CMAKE_MINIMUM_REQUIRED(VERSION 3.2.0)

include( scripts/cmake/Functions.cmake )

SET(CMAKE_CXX_FLAGS "-std=c++11 -Wno-deprecated")

add_subdirectory( IO )
include_directories( SYSTEM ${CMAKE_CURRENT_SOURCE_DIR}/ThirdParty/tclap/include )

ADD_EXECUTABLE(max max.cpp)
TARGET_LINK_LIBRARIES(max
    IO
)

ADD_EXECUTABLE(average average.cpp)
TARGET_LINK_LIBRARIES(average
    IO
)

