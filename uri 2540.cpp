#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;
    double s;

    // number of players
    while(cin >> n)
    {
        int arr[n], cnt = 0;

        for(i=0; i<n; i++)
        {
            // votes of each player
            cin >> arr[i];

            // counting the number of
            //votes for the impeachment
            if(arr[i]==1)
            {
                cnt++;
            }
        }
        // calculating 2/3 of the
        // total number of players
        s = ((double)n * 2) / 3;

        // taking decision
        if(s<=cnt)
        {
            cout << "impeachment" << endl;
        }
        else
        {
            cout << "acusacao arquivada" << endl;
        }
    }

    return 0;
}

