#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, layer, l;

    while(cin >> n)
    {
        int s_point = 0, f_point = n-1, ar[n][n];

        if (n==0)
            break;

        // find out the layer of
        // Bidimentional array
        layer = n / 2;

        if (n%2!=0)
            layer++;

        // loop for creating layer
        for (l=1; l<=layer; l++)
        {
            // loop for row of the array
            for (i=s_point; i<=f_point; i++)
            {
                // loop for column of the array
                for (j=s_point; j<=f_point; j++)
                {
                    // firstly array is full
                    // filled by l=1 and then l++
                    ar[i][j] = l;
                }
            }
            /* here s_point and f_point are controlling
             starting and finishing point
             of the variable layer  */
            s_point++;
            f_point--;
        }

        // displaying array...
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (j==0)
                    cout << setw(3) << ar[i][j];
                else
                    cout << " " << setw(3) << ar[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}


