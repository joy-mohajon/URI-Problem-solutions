#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d,s;

    cin >> a >> b >> c;

    if(a+b<=c || a+c<=b || b+c<=a)
    {
        // if this is not represent triangle
        cout << "Invalido" << endl;

    }
    else
    {
        // if represent triangle...
        if(a==b && b==c)
        {
            //if all sides of the triangle is same
            cout << "Valido-Equilatero" << endl;

            if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((b*b+c*c)==a*a))
            {
                // if this support right triangle's formula
                cout << "Retangulo: S" << endl;
            }
            else
            {
                // otherwise ...
                cout << "Retangulo: N" << endl;
            }
        }
        else if(a==b || b==c || c==a)
        {
            // if two sides of the triangle is same
            cout << "Valido-Isoceles" << endl;

            if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((b*b+c*c)==a*a))
            {
                cout << "Retangulo: S" << endl;
            }
            else
            {
                cout << "Retangulo: N" << endl;
            }
        }
        else
        {
            // if they are different from one another
            cout << "Valido-Escaleno" << endl;

            if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((b*b+c*c)==a*a))
            {
                cout << "Retangulo: S" << endl;
            }
            else
            {
                cout << "Retangulo: N" << endl;
            }
        }
    }
    return 0;
}
