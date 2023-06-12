#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int rut, isla, digito, a, b, c, d, e, f, g, h,i,j,k,l,m,n,o,p;
 
  cin >> rut;
    
  a = rut % 10;
  rut = rut / 10;  
  b = rut % 10;
  rut = rut / 10;
  c = rut % 10;
  rut = rut / 10;
  d = rut % 10;
  rut = rut / 10;
  e = rut % 10;
  rut = rut / 10;
  f = rut % 10;
  rut = rut / 10;
  g = rut % 10;
  rut = rut / 10;
  h = rut % 10;
  rut = rut / 10;
  

  i = a * 2;
  j = b * 3;
  k = c * 4;
  l = d * 5;
  m = e * 6;
  n = f * 7;
  o = g * 2;
  p = h * 3;
    
  isla = (i+j+k+l+m+n+o+p)%11;
  digito = 11-isla;
  
  cout << digito;
    return 0;
}