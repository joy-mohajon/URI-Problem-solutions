#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b1, b, c, n;

    cin >> n;

    //calculating hours, minutes, seconds
    a = n / 3600;
    b1 = n % 3600;
    b = b1 / 60;
    c = b1 % 60;

    //displaying hours, minutes, seconds
    cout << a << ":" << b << ":" << c << endl;

    return 0;
}

