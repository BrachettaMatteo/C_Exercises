cmake_minimum_required(VERSION 3.0)
project(listaSpesa)


#add source directory for *.h
include_directories(${PROJECT_SOURCE_DIR}/library)

add_executable(listaSpesa ./src/main.c)