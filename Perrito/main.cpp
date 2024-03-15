#include <iostream>
#include "Perrito.h"
using namespace std;

struct Notas{
  string nombres_estudiantes;
  string nombre_curso;
  float nota;
  int semestre;
};



int main() {
  Notas obj1;
  Perrito *obj2 new Perrito();
  cout << "El perrito ladro "<< obj2->ladrar()<< " veces"<<endl;
  obj2->aullar();
  obj2->hacerChichi();
  //cout << "Estudiante:"<< endl;
  //cin >> obj1.nombres_estudiantes;
  //cout << "Curso:"<< endl;
  //cin >> obj1.nombre_curso;
  //cout << "Nota:"<< endl;
  //cin >> obj1.nota;
  //cout << "El estudiante "<< obj1.nombres_estudiantes << " del curso "<< obj1.nombre_curso << " saco una nota de "<< obj1.nota << endl;
  return 0;
}