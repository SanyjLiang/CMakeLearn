cmake_minimum_required(VERSION 3.15)
project(test)

#set(SRC add.cpp sub.cpp div.cpp muli.cpp main.cpp)

#查找文件
#aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

#设置生成的可执行程序放在哪个路径下(也可以不设置)
#set(EXECUTABLE_OUTPUT_PATH /home/syjl/aa/bb/cc)

#指定头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

#设置语言标准，当前设置为C++11
set(CMAKE_CXX_STANDARD 11)

#指定动态库生成的文件路径（可以不指定，默认在构建目录下，即build）
#set(LIBRARY_OUTPUT_PATH /home/syjl/abcdefg)

#添加动态库
#add_library(calc SHARED ${SRC})

#指定静态库生成的文件路径（可以不指定，默认在构建目录下，即build）
#set(LIBRARY_OUTPUT_PATH /home/syjl/abcdefg)

#添加静态库
#add_library(calc STATIC ${SRC})

#链接静态库
link_libraries(calc)

#添加被链接静态库的路径
link_directories(${CMAKE_SOURCE_DIR}/libry1)

#生成可执行程序
add_executable(app ${SRC})