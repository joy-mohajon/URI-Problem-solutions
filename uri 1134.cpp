#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, alc = 0, gas = 0, die = 0;

    cin >> n;

    /* counting number of
    times Alcohol, Gasoline,
    Diesel supplied  */

    while (n!=4);
    {
        if (n==1)
            alc ++;
        else if (n==2)
            gas++;
        else if (n==3)
            die++;
        else if (n==4)
            break;

        cin >> n;
    }

    //displaying statistics

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << die << endl;

    return 0;
}


