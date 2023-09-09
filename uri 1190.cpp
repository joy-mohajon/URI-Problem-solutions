#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, z=11, t=0;
    char c;
    double x[12][12], s=0.0;

    // input a character
    cin << c;

    // input arrays values
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            cin >> x[i][j];
        }
    }

    // calculating sum
    for (i=11; i>6; i--)
    {
        t++;
        for (j=t; j<z; j++)
        {
            s+=x[j][i];
        }
        z--;
    }

    cout << fixed;

    // displaying sum or average
    if (c=='S')
        cout << setprecision(1) << s << endl;
    else if (c=='M')
        cout << setprecision(1) << s/30 << endl;

    return 0;
}
