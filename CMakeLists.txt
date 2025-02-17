cmake_minimum_required(VERSION 3.10)
project(nebulakv)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add_subdirectory(third_party/atomkv)
add_subdirectory(third_party/wal)

add_subdirectory(src)
#add_subdirectory(tests)