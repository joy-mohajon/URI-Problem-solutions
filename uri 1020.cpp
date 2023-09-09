#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b1, b, c, n;

    cin >> n;

    /* calculating and displaying
    years, months and days */

    a = n / 365;
    cout << a << " ano(s)" << endl;

    b1 = n % 365;
    b = b1 / 30;
    cout << b << " mes(es)" << endl;

    c = b1 % 30;
    cout << c << " dia(s)" << endl;

    return 0;
}
