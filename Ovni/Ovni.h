//
// Created by clase on 8/03/2024.
//

#ifndef OVNI_OVNI_H
#define OVNI_OVNI_H
#include <string>
using namespace std;

class Ovni {
private:
    string tipo, procedencia;
public:
    void volar();
    void aterrizar();
    int abd_humanos();
    int abd_vacas();
};
Ovni(const string &tipo, string procedencia);

#endif //OVNI_OVNI_H
