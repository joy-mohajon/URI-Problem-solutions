#include<bits/stdc++.h>

using namespace std;

int main()
{
    float a;
    //input floating number
    cin>>a;

    //condition apply :
    /* whether the number belongs to:
    [0,25] (25,50], (50,75], (75,100]
    otherwise displaying "Fora de intervalo"  */

    if (0.0000 <= a && a <= 25.0000)
        cout << "Intervalo [0,25]" << endl;

    else if (25.0000 < a && a <= 50.0000)
       cout << "Intervalo (25,50]" << endl;

    else if (50 < a && a <= 75)
       cout << "Intervalo (50,75]" << endl;

    else if (75.0000 < a && a <= 100.0000)
       cout << "Intervalo (75,100]" << endl;

    else
       cout << "Fora de intervalo" << endl;

    return 0;
}
