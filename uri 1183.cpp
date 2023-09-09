#include<bits/stdc++.h>

using namespace std;

main()

{
    int i, j;
    char c;
    double arr[12][12], s=0.0;

    // input a character
    cin >> c;

    // input arrays values
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            cin >> arr[i][j];
        }
    }

    // calculating sum
    for (i=0; i<12; i++)
    {
        for (j=i+1; j<12; j++)
        {
            s+=arr[i][j];
        }
    }

    cout << fixed;

    // displaying sum or average
    if (c == 'S')
        cout << setprecision(1) << s << endl;

    else if (c == 'M')
        cout << setprecision(1) << s/66.0 << endl;


    return 0;


}


