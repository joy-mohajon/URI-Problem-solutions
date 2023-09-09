#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    double x, y;

    cin >> n;

    // calculating the value of x and y
    //using the question's formula

    x = n / log(n);

    y = x * 1.25506;

    cout << fixed;
    cout << setprecision(1) << x << " " << y << endl;

    return 0;

}

