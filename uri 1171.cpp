#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, cnt;

    cin >> n;

    int ar[n];

    // input array values
    for(i=0; i<n; i++)
        cin >> ar[i];

    // find ascending order of array
    sort(ar, ar+n);

    j=0;
    i=0;

    while(i<n)
    {
        cnt=0;

        /* calculating and displaying quantity of
        same values in ascending order of array */
        while(1)
        {
            //find out same values
            if (ar[i]==ar[j])
            {
                //counting same values
                cnt++;
                //increasing array
                j++;
            }
            else
            {
                //displaying quantity of same values
                cout << ar[i] << " aparece " << cnt << " vez(es)\n";
                break;
            }
        }
        i = j;
    }

    return 0;
}

