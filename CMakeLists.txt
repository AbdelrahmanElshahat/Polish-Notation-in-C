cmake_minimum_required(VERSION 3.17)
project(Stack C)

set(CMAKE_C_STANDARD 99)

add_executable(Stack main.c stack.c INFIX_TO_POSTFIX.c Evaluate_PostFix.c INFIX_TO_POSTFIX.h)