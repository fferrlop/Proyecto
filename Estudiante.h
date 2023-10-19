//
// Created by Francisco on 18/10/2023.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "Persona.h"

class Estudiante : public Persona {
    std::string grado;

public:
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrarDetalles();
};

#endif