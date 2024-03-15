//
// Created by clase on 8/03/2024.
//
#include <iostream>
#include "Perrito.h"

int Perrito::ladrar() {
    return rand() % (10 - 1)+ 1;
}
void Perrito::aullar() {
    cout <<"Auuu" <<endl;
}
void Perrito::hacerChichi() {
    cout <<"Hace del mundo "<<endl;
}

//Perrito::~Perrito(){
//delete this;
//}

//Perrito::Perrito(const string &nombre, int edad) ; nombre(nombre) edad(edad){
//    this->nombre(nombre)
//}
