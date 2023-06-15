#include <iostream>
using namespace std;
void leerButaca(int butaca){
     cout<<"por último, que asiento?"<<endl;
   cin>>butaca;
}
void leerFila(int fila){
     cout<<"que fila?:"<<endl;
   cin>>fila;
}
void leerPiso(int piso){
    cout<<"hola, bienvenido! por favor elija un piso:"<<endl;
   cin>>piso;
}

int main(){
   int primerP[30][20];
   int segundoP[15][12];
   int piso, fila, butaca;
   
   leerPiso(piso);
   leerFila(fila);
   leerButaca(butaca);

    return 0;
}