#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;
 
 //funcion para calcular poblacion total en chile
int pobTotal(int nacio[], int extran[]){
    int suma[32];
    int sumaF=0;
    for (int i=0; i<32; i++){
         suma[i]=nacio[i]+extran[i];
        sumaF=sumaF+suma[i];
    }
    return sumaF;
}

//funcion para calcular la poblacion total en una comuna específica
int pobComuna (int nacioA[], int extranA[], int numComuna){
   int poblacionComuna=nacioA[numComuna - 1 ] + extranA[numComuna - 1];
   return poblacionComuna;
}

int main (){
    int a;
    string consulta;

    //declarar arreglo
    int comunas[32];
    for (int i=0; i<32; i++){
        comunas[i]=i+1;
    }
     
    //pedir datos
    int nacio, nacioA[32], extran, extranA[32],m2sup, m2supA[32], colegios,  colegiosA[32], m2area, m2areaA[32];
        for(int i=0; i<32; i++){
            cin>>nacio>>extran>>m2sup>>colegios>>m2area;
            nacioA[i]=nacio;
            extranA[i]=extran;
            m2supA[i]=m2sup;
            colegiosA[i]=colegios;
            m2areaA[i]=m2area;    
        }
       

    //abre menú
    cout<<"que desea consultar? (elegir por numero): "<<endl<<"1>poblacion total"<<endl;
    cout<<"2>poblacion comuna"<<endl<<"3>porcentaje extranjeros"<<endl;
    cout<<"4>habitantes por m2"<<endl<<"5>comuna mayor superficie"<<endl;
    cout<<"6>mayor superficie areas verdes"<<endl<<"7>cantidad de colegios"<<endl;
    cout<<"8>salir"<<endl;
     cin>>consulta;
    
    //outputs
    int numComuna;
    if(consulta=="1"){ //poblacion total
    a=pobTotal(nacioA, extranA);
    cout<<"la poblacion nacional es "<<a<<endl;
    
    //poblacion comuna
    }else if(consulta=="2"){ 
        cout<<"de cual comuna?"<<endl;
        cin>>numComuna;
        int poblacionComuna;
        poblacionComuna=pobComuna(nacioA, extranA, numComuna);
        cout << "La poblacion de la comuna es: " << poblacionComuna << endl;

    //porcentaje extranjeros
    }else if (consulta=="3"){ 
        cout<<"de cual comuna?"<<endl;

    }

    return 0;
}