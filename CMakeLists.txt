cmake_minimum_required(VERSION 3.15)
project(test)

#set(SRC add.cpp sub.cpp div.cpp muli.cpp main.cpp)

#查找文件
#aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

#设置生成的可执行程序放在哪个路径下
set(EXECUTABLE_OUTPUT_PATH /home/syjl/aa/bb/cc)

#指定头文件
include_directories(${PROJECT_SOURCE_DIR}/include)
#设置语言标准，当前设置为C++11
set(CMAKE_CXX_STANDARD 11)

#生成可执行程序
add_executable(app ${SRC})