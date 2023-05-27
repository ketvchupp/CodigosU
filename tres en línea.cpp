#include <iostream>
#include <string>

using namespace std;

int main() {
    char gay[3][3];
    string res;
    bool waos=false;

    // Pedir matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> gay[i][j];
        }
    }

    // Condiciones
    // Horizontal y vertical
    for (int i = 0; i < 3; i++) {
        if ((gay[i][0] == gay[i][1] && gay[i][1] == gay[i][2]) || // Horizontal
            (gay[0][i] == gay[1][i] && gay[1][i] == gay[2][i])) { // Vertical
            waos=true;
        }
    }

    // Diagonal
    if ((gay[0][0] == gay[1][1] && gay[1][1] == gay[2][2]) || 
        (gay[0][2] == gay[1][1] && gay[1][1] == gay[2][0]) ||
         waos) { 
        res = "si";
    }else{
        res="no";
    }

    cout << res << endl;

    return 0;
}