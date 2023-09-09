#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    float s;

    cin >> a >> b;

    //calculating the measurement
    //of fuel liters
    s = a * b;

    //displaying the measurement
    cout << fixed;
    cout << setprecision(3) << s/12 << endl;

    return 0;
}

