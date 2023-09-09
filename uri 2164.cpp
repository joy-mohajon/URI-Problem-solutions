#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double d, s;

    cin >> n;

    /* find out Fibonacci of n using by question's formula */
    // pow means power and sqrt means square root
    d = pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n);

    s = d / sqrt(5);

    cout << fixed;
    cout << setprecision(1) << s << endl;


    return 0;
}

