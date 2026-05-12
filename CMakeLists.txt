cmake_minimum_required(VERSION 4.2)
project(Operating_Systems_From_0_to_1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Operating_Systems_From_0_to_1
        config.h
        cpu.c
        cpu.h
        main.c
        memory.c
        register.c
        memory.h
        register.h)
