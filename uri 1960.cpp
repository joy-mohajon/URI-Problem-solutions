#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, s, k;

    cin >> n;

    /* if N is getter than
    equal to 900 then deduct
    900 from N and displaying
    roman format of 900. This
    formula works for 500,
     400, 100, 90, 50, 40, 10,
     9, 5, 4, 3, 2, 1  */

    if (n>=900)
    {
        s=n-900;
        cout << "CM" << endl;
        n=s;
    }

    if (n>=500)
    {
        s=n-500;
        cout << "D" << endl;
        n=s;
    }

    if (n>=400)
    {
        s=n-400;
        cout << "CD" << endl;
        n=s;
    }
    while (n>=100)
    {
        s=n-100;
        cout << "C" << endl;
        n=s;
    }

    if (n>=90)
    {
        s=n-90;
        cout << "XC" << endl;
        n=s;
    }
    if (n>=50)
    {
        s=n-50;
        cout << "L" << endl;
        n=s;
    }
    if (n>=40)
    {
        s=n-40;
        cout << "XL" << endl;
        n=s;
    }
    while (n>=10)
    {
        s=n-10;
        cout << "X" << endl;
        n=s;
    }
    if (n==9)
    {
        s=n-9;
        cout << "IX" << endl;
        n=s;
    }
    if (n>=5)
    {
        s=n-5;
        cout << "V" << endl;
        n=s;
    }
    if (n==4)
    {
        cout << "IV" << endl;
    }
    else if (n==3)
    {
        cout << "III" << endl;
    }
    else if (n==2)
    {
        cout << "II" << endl;
    }
    else if (n==1)
    {
        cout << "I" << endl;
    }

    cout << endl;

    return 0;
}

