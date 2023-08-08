#include <iostream>
using namespace std;
int main (){

    //definir variables
    int num;
    string res;
    cin>>num;

    //condicional, comprobar
    if (num%5==0){
        res= "divisible por cinco";
    }else if (num%12==0){
        res= "divisible por doce";
   }
    
    if(num%5==0 && num%12==0){
        res= "divisible por ambos";
    }
    
    //imprimir resultado
    cout<<res<<endl;
    return 0;
}