#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, R1, R2;

    cin >> a >> b >> c;

    /* implementing bhaskara’s formula. */

    R1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    R2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    // condition apply :

    /* Either condition is true then displaying
    “Impossivel calcular” otherwise displaying
    the result of bhaskara’s formula */

    if ((pow(b, 2) < 4 * a * c) || a == 0.0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        cout << fixed;
        cout << "R1 = " << setprecision(5) << R1 << endl
             << "R2 = " << R2 << endl;
    }

    return 0;
}

