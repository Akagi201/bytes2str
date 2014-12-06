cmake_minimum_required(VERSION 2.8.4)

project(bytes2str_sample)

set(SOURCE_FILES sample.c src/bytes2str.c)

include_directories("/usr/local/include" ${PROJECT_SOURCE_DIR}/src)

link_directories("/usr/local/lib")

add_executable(bytes2str_sample ${SOURCE_FILES})
