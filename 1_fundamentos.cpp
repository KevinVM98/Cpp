
//Escribe un programa que calcule el área de un triángulo dado su base y altura.

#include <iostream>

int main() {
    float base, altura, area; //definimos el tipo de dato 

    // Solicitar la base y la altura al usuario
    
    std::cout << "Introduce la base del triángulo: ";
    std::cin >> base;
    std::cout << "Introduce la altura del triángulo: ";
    std::cin >> altura;

    // Calcular el área del triángulo
    area = (base * altura) / 2;

    // Mostrar el resultado
    std::cout << "El área del triángulo es: " << area << std::endl;

    return 0;
}
