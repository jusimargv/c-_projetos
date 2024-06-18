#include <iostream>

int main() {
    int a = 5;
    int b = 2;
    int result;

    // Operadores aritméticos
    result = a + b; // Adição
    std::cout << "a + b = " << result << std::endl;

    result = a - b; // Subtração
    std::cout << "a - b = " << result << std::endl;

    result = a * b; // Multiplicação
    std::cout << "a * b = " << result << std::endl;

    result = a / b; // Divisão
    std::cout << "a / b = " << result << std::endl;

    result = a % b; // Módulo
    std::cout << "a % b = " << result << std::endl;

    // Operadores de comparação e lógicos
    bool isEqual = (a == b); // Igualdade
    std::cout << "a == b is " << std::boolalpha << isEqual << std::endl;

    bool isNotEqual = (a != b); // Desigualdade
    std::cout << "a != b is " << isNotEqual << std::endl;

    // Operadores de incremento/decremento
    a++; // Incrementa 'a' em 1
    std::cout << "a++ is " << a << std::endl;

    b--; // Decrementa 'b' em 1
    std::cout << "b-- is " << b << std::endl;

    return 0;
}
