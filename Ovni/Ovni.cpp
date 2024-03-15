//
// Created by clase on 8/03/2024.
//

#include "Ovni.h"
#include <iostream>

void Ovni::volar(){
    cout<<"Vuela"<<endl;
}
void Ovni::aterrizar(){
    cout<<"Aterriza"<<endl;
}
int Ovni::abd_humanos() {
    return rand() % (20 - 1)+ 1;
}
int Ovni::abd_vacas() {
    return rand() % (10 - 1)+ 1;
}

Ovni::Ovni(const string &tipo, string procedencia) ; tipo(tipo) ; procedencia(procedencia){
    this->tipo(tipo);
    this->procedencia(procedencia);
}