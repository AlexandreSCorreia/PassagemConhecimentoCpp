#include "iostream"
#include "main.h"
#include "adicionar.h"
#include "multiplicar.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Resultado Adição 1 + 2: " << adicionar(1,2) << std::endl;
    std::cout << "Resultado Multiplicação 2 * 2: " << multiplicar(2,2) << std::endl;
}