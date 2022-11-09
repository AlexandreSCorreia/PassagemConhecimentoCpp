cmake_minimum_required(VERSION 3.12)

project(Teste VERSION 1.0.0)

#linkar projeto, ai ele vai procurar um CMakeLists dentro dessa pasta informada
add_subdirectory(main)
add_subdirectory(adicionar)
add_subdirectory(multiplicar)
