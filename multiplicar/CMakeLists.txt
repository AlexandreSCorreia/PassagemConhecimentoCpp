cmake_minimum_required(VERSION 3.12)

project(Multiplicar VERSION 1.0.0)

#Essa lib vai ser transformada em uma biblioteca dinamica então tem que ser
#alterada para shared, então varios projetos poderão utilizar a DLL
add_library(multiplicar SHARED multiplicar.cpp multiplicar.h)
