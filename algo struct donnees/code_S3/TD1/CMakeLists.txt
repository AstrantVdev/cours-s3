cmake_minimum_required(VERSION 3.23)
project(TD1 C)

set(CMAKE_C_STANDARD 99)

add_executable(TD1 main.c structure.c structure.h fonction_Tab.c fonction_Tab.h fonction_List.c fonction_List.h fonction_BinaryTree.c fonction_BinaryTree.h fonction_Cell.c fonction_Cell.h File.c File.h)
