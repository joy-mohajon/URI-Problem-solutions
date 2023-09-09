#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, max, min;

    //the number of guests, the
    //minimum and the maximum height
    while(cin >> n >> min >> max)
    {
        int arr[n], cnt=0;

        // height
        for (i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        // counting the number of guests
        //who's height between min and max
        for (i=0; i<n; i++)
        {
            if (min<=arr[i] && arr[i]<=max)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}


