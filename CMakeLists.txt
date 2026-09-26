cmake_minimum_required(VERSION 3.21)
project(tiny_c LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)   # fail if the compiler can't do C23
set(CMAKE_C_EXTENSIONS OFF)         # c23, not gnu23

add_executable(hello hello/hello.c)
target_compile_options(hello PRIVATE
    -Wall -Wextra -Werror -g -fsanitize=address,undefined)
target_link_options(hello PRIVATE -fsanitize=address,undefined)
