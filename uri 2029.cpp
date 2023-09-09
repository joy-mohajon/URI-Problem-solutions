#include<bits/stdc++.h>

using namespace std;

int main()
{
    double v, d, area, radius, height;

    // calculating area and height and displaying.
    // We know  volume = height * area
    while (cin >> v >> d)
    {
        radius = d / 2;

        area = radius * radius * 3.14;

        height = v / area;

        cout << fixed;
        cout << "ALTURA = " << setprecision(2) << height << endl
             << "AREA = " << setprecision(2) << area << endl;
    }
    return 0;
}

