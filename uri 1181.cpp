#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, i, j;
    char c;
    double arr[12][12], sum = 0.0;

    // input a integer and a character
    cin >> n >> c;

    // input array's values
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
        sum += arr[n][i];
    }

    cout << fixed;

    // displaying sum or average
    if (c=='S')
        cout << setprecision(1) << sum << endl;

    else if (c=='M')
        cout << setprecision(1) << (double)sum/12.0 << endl;

    return 0;
}


