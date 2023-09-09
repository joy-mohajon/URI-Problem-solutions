#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, i, j, k;

    cin >> i >> j >> k;

    // arrange them in decreasing order

    if (i >= j && i >= k)

        a = i, b = j, c = k;

    else if (j>i && j>=k)

        a = j, b = i, c = k;

    else if (j>=i && j>k)

        a = j, b = i, c = k;

    else
        a = k,b = i,c = j;


    /* displaying message according
    to the condition of questions */

    if (a >= b + c)

        cout<<"NAO FORMA TRIANGULO\n";

    else {

        if (a * a==b * b + c * c)

           cout<<"TRIANGULO RETANGULO"<<endl;

        if (a * a > b * b + c * c)

           cout<<"TRIANGULO OBTUSANGULO\n";

        if (a * a < b * b + c * c)

            cout<<"TRIANGULO ACUTANGULO\n";

         if (i == j && i == k)

           cout<<"TRIANGULO EQUILATERO\n";

        else if (i == j || j == k || k == i)

           cout<<"TRIANGULO ISOSCELES\n";
    }

    return 0;
}

