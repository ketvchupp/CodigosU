#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//funcion para intercambiar
void swap (int &a, int &b){
    int oo=a;
    a=b;
    b=oo;
    return;
}

//funcion leer arreglo
void leerArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
 return;   
}

//bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int array[n];
    leerArray(array, n);
    
    bubbleSort(array, n);
    
    for (int i=0; i<n; i++){
        cout<<array[i]<<endl;
    }
    
    
    return 0;
}
