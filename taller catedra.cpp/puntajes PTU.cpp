
//PM matemática y PL lenguaje
//PP puntaje ponderado: 65% mate y 35% lengua = PP=(PM*65%+PL*35%)
//estará seleccionado aquel que tenga más de 650pts. entre 540 y 650 quedan en lista de espera y menos 540 mueren
//programar con música es bkn hasta que sale muse y me pone triste
//this ship is taking me faaar awaay
#include <iostream>
using namespace std;
int i,j,k;
void LimpiarArray(int PM[], int PL[], int PP){
     for (i=0; i<10; i++){
        PM[i]=0;
        PL[i]=0;
        PP[i]=0;
     }
     cout<<"\n\n\t---Arreglo Limpio---"<<endl;
}
void LlenaArray(int PM[], int PL[], int PP){
    LimpiarArray(PM, PL, PP);
    srand(time(NULL));
    for (i=0; i<10; i++){
        PM[i]=((rand()%(851-350))+350);
        PL[i]=((rand()%(501))+350);
    }
}

void Ponderado(int PM[], int PL[], int PP){
    for(i=0; i<10; i++){
        PP[i]=(PM[i]*0.65)+(PL[i]*0.35);
    }
}
int main (){

    int total;
     cout<<"Cuantos estudiantes hay?(ingrese numero menor o igual a 100)"<<endl;
     cin>>total;
     while(total>100){
          cout<<"por favor ingrese un numero menor o igual a 100 :)"<<endl;
          cin>>total;
     }

     

    return 0;
}