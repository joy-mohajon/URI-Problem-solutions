#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin >> n;

    int arr[n], cnt=0;

    // some integer
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // counting the number of 2 and 3
    for(i=0; i<n; i++)
    {
        if (arr[i]==2 || arr[i]==3)
        {
            cnt++;
        }
    }

    // displaying the count number
    cout << cnt << endl;

    return 0;
}
