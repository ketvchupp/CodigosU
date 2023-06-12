#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
     int n, ag;
         int a, b, c, d, e, f;
    cin>>n;
    cin>>ag;
    
    a=n%10;
    
    n=n/10;
    b=n%10;
    
    n=n/10;
    c=n%10;
    
    n=n/10;
    d=n%10;
    
    n=n/10;
    e=n%10;
        
    n=n/10;
    f=n;
    
    f=(f+ag)%10;
    e=(e+ag)%10;
    d=(d+ag)%10;
    c=(c+ag)%10;
    b=(b+ag)%10;
    a=(a+ag)%10;
    
    cout<<f<<e<<d<<c<<b<<a<<endl;
    
    
   
    return 0;
}
