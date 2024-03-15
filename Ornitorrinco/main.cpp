#include "Ornitorrinco.h"
using namespace std;

int main() {
    Ornitorrinco *perry = new Ornitorrinco();
    perry->respirarBranquial();
    perry->envenenar();
    cout << "He puesto: " << perry->ponerHuevos() << " huevitos" << endl;
    cout << "He puesto: " << perry->ponerHuevos() << " huevitos" << endl;
    perry->amamantar();
    cout << "He puesto: " << perry->ponerHuevos() << " huevitos" << endl;
    perry->envenenar();

    delete perry;

    return 0;
}
