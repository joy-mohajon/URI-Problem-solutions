#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    while(1)
    {
        cin >> n;

        int arr[n], cnt1=0, cnt2=0;

        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            cin >> arr[i];

            if(arr[i]==1)
            {
                cnt1++;
            }
            else if(arr[i]==0)
            {
                cnt2++;
            }
        }

        cout << "Mary won " << cnt2
             << " times and John won "
             << cnt1 << " times" << endl;
    }
    return 0;
}
