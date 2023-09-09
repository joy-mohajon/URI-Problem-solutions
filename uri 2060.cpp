#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d[4] = {2, 3, 4, 5};

    cin >> n;

    int arr[n], i, j;

    // input list
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    /* displaying and counting the
    amount of multiples of 2, 3, 4
    and 5 in the input list  */

    for (i=0; i<4; i++)
    {
        int cnt=0;

        for (j=0; j<n; j++)
        {
            if (arr[j]%d[i]==0)
            {
                // counting ...
                cnt++;
            }
        }
        cout << cnt << " Multiplo(s) de " << d[i] << endl;
    }

    return 0;
}

