#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, r;
    while(cin >> n >> r)
    {
        int i, j, volun, arr[n+5];

        // initializing array by 0
        for(i=1; i<=n; i++)
            arr[i] = 0;

        /* input the number of volunteers
         that returned from the mission
        and initializing them by 1 */
        for(i=0; i<r; i++)
        {
            cin >> volun;
            arr[volun] = 1;
        }

        int flag = 0;

        // checking have any volunteers who
        // did not return from their missions
        for(i=n; i>=1; i--)
        {
            if (arr[i]==0)
            {
                flag = 1;
                break;
            }
        }

        // if all of them come back
        if (flag == 0)
            cout << "*";

        // displaying the number of
        //volunteers who did not return
        for(i=1; i<=n; i++)
        {
            if(arr[i]==0)
                cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
