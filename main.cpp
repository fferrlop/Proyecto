
#include <iostream>
#include "Persona.h"
#include "Estudiante.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo!" << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona;
    persona.setNombre("Fran");
    persona.setEdad(19);
    persona.setGenero("Masculino");

    std::cout << "Información de la Persona:" << std::endl;
    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "Genero: " << persona.getGenero() << std::endl;

    Estudiante estudiante;
    estudiante.setNombre("Ana");
    estudiante.setEdad(20);
    estudiante.setGenero("Femenino");
    estudiante.setGrado("3º de carrera");

    std::cout << "\nDetalles del Estudiante:" << std::endl;
    estudiante.mostrarDetalles();
    return 0;
}