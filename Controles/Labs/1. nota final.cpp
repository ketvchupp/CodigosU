#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
float a,b,c,d,e;
float res, PP;
    cin>>a>>b>>c>>d>>e;
    PP=(a+b+c+d)/4;
    res= (PP*0.7)+(e*0.3);
    cout<<res<<endl;
    return 0;
}