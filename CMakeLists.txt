cmake_minimum_required(VERSION 3.17)
project(hmac C)

set(CMAKE_C_STANDARD 11)

add_executable(hmac main.c md5.c hmac-md5.c)