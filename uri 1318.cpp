#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, i;

    while(1)
    {
        cin >> a >> b;

        int arr[a+5]={0}, cnt=0;

        // exit point
        if (a==0 && b==0)
            break;

        /* input array values and
         counting each of them
         separately  */
        for(i=0; i<b; i++){
            cin >> n;
            arr[n]++;
        }

        /* counting the number
         of tickets those are
         more than one */
        for(i=1; i<=a; i++)
        {
            if(1<arr[i])
              cnt++;
        }

        // dispalying the quantity
        // of tickets
        cout << cnt << endl;
    }

    return 0;
}


