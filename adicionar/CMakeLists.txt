cmake_minimum_required(VERSION 3.12)

project(Adicionar VERSION 1.0.0)

#Não será adicionado um executable pois essa pasta é uma lib
add_library(adicionar STATIC adicionar.cpp adicionar.h)
