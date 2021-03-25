cmake_minimum_required(VERSION 3.20.0)

project(myProj)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(BankAccount)

target_link_libraries(${PROJECT_NAME} Bank)

