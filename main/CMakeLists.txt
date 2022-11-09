cmake_minimum_required(VERSION 3.12)
#Não precisa adicionar o o executable que ele ja linca como nome do projeto
#como no CMakeList principal foi feita a linkagem ele ja adiciona automaticamente o nome do projeto
#project(main VERSION 1.0.0)
#Inves de fazer dessa forma >> add_executable(calculadora main.cpp main.h)
#E para melhor organização é feita da forma abaixo
add_executable(calculadora)
#É privado pois so quer que a calculadora acesse esses arquivos
target_sources(calculadora PRIVATE main.cpp main.h)

#Incluir e linkar a lib adicionar para poder utilizar na main
target_include_directories(calculadora PRIVATE ../adicionar ../multiplicar)
target_link_libraries(calculadora PRIVATE adicionar multiplicar)
