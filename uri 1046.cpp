#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b;

    /* calculating and displaying
    the duration of the game */

    if (a > b){
        c = 24 - a;
        cout << "O JOGO DUROU " << c + b << " HORA(S)\n";
    }
    else if (a < b){
        c = b - a;
        cout << "O JOGO DUROU " << c << " HORA(S)\n";
    }
    else
        cout << "O JOGO DUROU 24 HORA(S)\n";

    return 0;
}


