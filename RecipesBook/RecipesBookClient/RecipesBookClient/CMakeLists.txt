cmake_minimum_required(VERSION 2.6)

project(RecipesBookClient)

set(CMAKE_CXX_STANDART 11)

set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

file(GLOB 
	CCPS "*.cpp")

add_executable(${RecipesBookClient} ${CCPS})