#include <iostream>

using namespace std;

long sumar(long n, long num[]) { //funcion long por los numeros feos o mejor dicho largos
    
    long sum=0;
     for (long i=0; i<n; i++){
         sum=sum+num[i];
    }
    
    return sum;
}

int main (){
    int n;
    long res;
    cin>>n;
     long num[n];
    //declarar arreglo
    for (int i=0; i<n; i++){
        cin>>num[i];
    }
    

    res=sumar(n, num);
    
    cout<<res<<endl;
    
    return 0;
}