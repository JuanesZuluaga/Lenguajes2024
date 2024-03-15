//
// Created by clase on 15/03/2024.
//

#ifndef UNTITLED_ORNITORRINCO_H
#define UNTITLED_ORNITORRINCO_H

#include <iostream>
#include "Mamifero.h"
#include "Oviparo.h"
#include "Anfibio.h"
#include "Venenoso.h"

class Ornitorrinco : public Mamifero, public Oviparo, public Anfibio, public Venenoso {
protected:
    int huevos;

public:
    Ornitorrinco();
    ~Ornitorrinco();

    void respirarBranquial() override;
    void respirarPulmonar() override;
    int ponerHuevos() override;
    void amamantar() override;
    void envenenar() override;
};

#endif // UNTILED_ORNITORRINCO_H
