#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  string nombre;
  string mision;
  string color;
  cout << "Alto!" << endl;
  cout << "Quien llega al puente de la muerte, 3 preguntas me debe responder, para el otro lado poder ver." << endl;

  cout << "Cual es tu nombre?" << endl;
  getline(cin, nombre);

  cout << "Cual es tu mision?" << endl;
  getline(cin, mision);
  
  cout << "Cual es tu color favorito?" << endl;
  getline(cin, color);

  cout << "Bienvenido " << nombre << ", amante del " << color << ", en mision de " << mision << "!" << endl;  
    return 0;
}
