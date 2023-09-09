#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;
    char st[30];

    // input a string
    while(cin >> st)
    {
        // number of position
        cin >> n;

        int arr[n];

        //input all positions
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        //displaying character of
        //string according to position
        for(i=0; i<n; i++)
        {
            cout << st[arr[i]-1];
        }
        cout << endl;
    }
    return 0;
}
