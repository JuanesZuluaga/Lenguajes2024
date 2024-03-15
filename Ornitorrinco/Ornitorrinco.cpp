#include "Ornitorrinco.h"
using namespace std;
Ornitorrinco::Ornitorrinco() {
    huevos = 1;
}

Ornitorrinco::~Ornitorrinco() {}

void Ornitorrinco::respirarBranquial() {
    cout << "Respirando por branquias" << endl;
}

void Ornitorrinco::respirarPulmonar() {
    cout << "Respirando por pulmones" << endl;
}

int Ornitorrinco::ponerHuevos() {
    huevos++;
    return huevos;
}

void Ornitorrinco::amamantar() {
    cout << "Amamantando" << endl;
}

void Ornitorrinco::envenenar() {
    cout << "Envenenando" << endl;
}
