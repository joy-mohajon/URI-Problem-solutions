#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    int a, b, c, x, e, f, g, s, l, k, m, h, j;

    /* calculating and displaying the minimum
    quantity of banknotes and coins  */

    cin >> n;

    //this part of banknotes

    cout << "NOTAS:" << endl;
    a = n * 100;
    b = a / 10000;
    cout << b << " nota(s) de R$ 100.00" << endl;

    b = a % 10000;

    c = b / 5000;
    cout << c << " nota(s) de R$ 50.00" << endl;

    c = b % 5000;
    x = c / 2000;
    cout << x << " nota(s) de R$ 20.00" << endl;

    x = c % 2000;
    e = x / 1000;
    cout << e << " nota(s) de R$ 10.00" << endl;

    e = x % 1000;
    f = e / 500;
    cout << e << " nota(s) de R$ 5.00" << endl;

    f = e % 500;
    g = f / 200;
    cout << g << " nota(s) de R$ 2.00" << endl;

    //this part of coins

    cout << "MOEDAS:" << endl;
    g = f % 200;
    s = g / 100;
    cout << s << " moeda(s) de R$ 1.00" << endl;

    s = g % 100;
    l = s / 50;
    cout << l << " moeda(s) de R$ 0.50" << endl;

    l = s % 50;
    k = l / 25;
    cout << k << " moeda(s) de R$ 0.25" << endl;

    k = l % 25;
    m = k / 10;
    cout << m << " moeda(s) de R$ 0.10" << endl;

    m = k % 10;
    h = m / 5;
    cout << h << " moeda(s) de R$ 0.05" << endl;

    h = m % 5;
    j = h / 1;
    cout << j << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

