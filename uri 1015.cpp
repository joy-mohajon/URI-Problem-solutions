#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x1, x2, y1, y2, d;

    //input 4 floating values
    cin >> x1 >> y1 >> x2 >> y2;

    //calculating distance by question's formula
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    //displaying distance
    cout << fixed;
    cout << setprecision(4) << d << endl;

    return 0;
}

