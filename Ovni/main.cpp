#include <iostream>
#include "Ovni.h"
using namespace std;

int main() {
    Ovni *obj1 new Ovni("circular", "via lactea");

    cout << "El ovni abdujo "<< obj1->abd_humanos<< " humanos y"<< obj1->abd_vacas<<" vacas" <<endl;
    obj1->volar();
    obj1->aterrizar();

    return 0;
}
