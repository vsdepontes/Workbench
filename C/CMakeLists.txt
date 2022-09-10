cmake_minimum_required(VERSION 3.23)
project(Workbench C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(lib)

add_executable(LinkedListStackTest linked-list-stack-test.c)
target_link_libraries(LinkedListStackTest PUBLIC LinkedListStack)