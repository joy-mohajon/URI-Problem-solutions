#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, v, r1, r2, X, Y, dstnce, range;

    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        cin >> v >> r1 >> r2;

        /*low of distance = sqrt((x2-x1)^2 + (y2-y1)^2) */

        X = (x2-x1)*(x2-x1);

        Y = (y2-y1)*(y2-y1);

        // calculating distance between two Fiddlesticks
        dstnce = sqrt(X+Y);

        // low of distance s = vt, t = 1.5s from question
        // calculating sum of all distance
        dstnce += v*1.50;

        // find out distance between two
        //Fiddlesticks with their radius
        range = r1+r2;

        if(dstnce > range)
            cout << "N" << endl;
        else
            cout << "Y" << endl;
    }
    return 0;
}
