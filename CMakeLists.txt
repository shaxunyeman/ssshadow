# Cmake的的版本需求
cmake_minimum_required(VERSION 2.8.12.2 FATAL_ERROR)

# 下面主要是用于检测,防止在源代码目录进行编译,必须将编译路径设置其他目录
#set(SourceDir ${CMAKE_SOURCE_DIR})

set(CMAKE_DISABLE_SOURCE_CHANGES ON)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

if(UNIX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")
endif()

project(ssshadow)

ADD_EXECUTABLE(ssshadow ${PROJECT_SOURCE_DIR}/main.cc)

target_include_directories(ssshadow
    PRIVATE
        ${PROJECT_SOURCE_DIR}/
)