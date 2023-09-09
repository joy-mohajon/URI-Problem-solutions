#include<bits/stdc++.h>

using namespace std;

main()
{
    int i, j, Z=10;
    char c;
    double x[12][12], s=0.0;

    // input a character
    cin >> c;

    // input arrays values
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            cin >> x[i][j];
        }
    }

    // calculating sum
    for (i=1; i<12; i++)
    {
        for (j=11; j>Z; j--)
        {
            s+=x[i][j];
        }
        Z--;
    }

    cout << fixed;

     // displaying sum or average
    if (c=='S')
        cout << setprecision(1) << s << endl;
    else if (c=='M')
        cout << setprecision(1) << s/66 << endl;

    return 0;


}

