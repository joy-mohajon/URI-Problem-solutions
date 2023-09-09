#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;

    while(cin >> n)
    {
        int arr[n][n];

        // firstly filling the 2D arrays by 3
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
               arr[i][j] = 3;
            }
        }

       // then filling matrix which has same cofactor by 1
        for (i=0; i<n; i++)
        {
            arr[i][i]=1;
        }

        // and then last step fill up by 2
        //diagonally which has different cofactor
        for (i=0, j=n-1; i<n; i++, j--)
        {
            arr[i][j]=2;
        }

        // displaying....
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
