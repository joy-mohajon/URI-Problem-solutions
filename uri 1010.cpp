#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, d, e;
    float c, f, s;

    //input value
    cin >> a >> b >> c >> d >> e >> f;

    //calculating the amount to be paid
    s = (b * c) + (e * f);

    //displaying amount
    cout << fixed;
    cout << setprecision(2) << "VALOR A PAGAR: R$ " << s << endl;

    return 0;
}


