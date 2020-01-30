cmake_minimum_required(VERSION 3.0)
project(CppBB)

if(EXISTS ${CMAKE_SOURCE_DIR}/.conan/conanbuildinfo.cmake)
    include(${CMAKE_SOURCE_DIR}/.conan/conanbuildinfo.cmake)
else()
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
endif()
conan_basic_setup()

add_compile_options(-std=c++14)
add_executable(CppBB main.cpp)
target_link_libraries(CppBB ${CONAN_LIBS})
