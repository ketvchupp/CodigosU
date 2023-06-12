#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    
     int entero;
    long entero_largo;
     char caracter;
    float decimal_corto;
     double decimal;
    
    cin >> entero;
    cin >> entero_largo;
    cin >> caracter;
    cin >> decimal_corto;
    cin >> decimal;
    
        
    cout<< entero << endl;
    cout<< entero_largo << endl;
    cout<< caracter << endl;

    cout << fixed; //para mostrar decimales
    cout << setprecision(3); 
    cout << decimal_corto << endl;
    cout << setprecision(9);
    cout << decimal << endl;
    return 0;
}
