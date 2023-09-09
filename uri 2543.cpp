#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i;

    while(cin >> m >> n)
    {
        int x[m], y[m], cnt=0;

        //the number of gameplays
        // and university ID
        for (i=0; i<m; i++)
        {
            cin >> x[i] >> y[i];
        }

        // counting the number of videos
        // that was playing by me
        for (i=0; i<m; i++)
        {
            if (x[i]==n && y[i]==0)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}

