cmake_minimum_required(VERSION 3.12)

project(Multiplicar VERSION 1.0.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY
    ../main
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
	../main
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
	../main
)

#Essa lib vai ser transformada em uma biblioteca dinamica então tem que ser
#alterada para shared, então varios projetos poderão utilizar a DLL
add_library(multiplicar SHARED multiplicar.cpp multiplicar.h)
