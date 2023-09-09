#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    float b, s;

    //input integer & floating
    cin >> a >> b;

    //calculating the average consumption
    s = a / b;

    //displaying the consumption
    cout << fixed;
    cout << setprecision(3) << s << " km/l" << endl;

    return 0;
}


