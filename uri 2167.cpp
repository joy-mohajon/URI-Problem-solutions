#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n, i;

    // the number of speed measures
    cin >> n;

    int arr[n];

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int flag = 0, max = arr[0];


    for(i=1; i<n; i++)
    {
        /* if the next measure is greater
        than equal from previous measure
        then loop is working continue
        otherwise break the loop and
        print index in that time */
        if (max<=arr[i])
        {
            max=arr[i];
            flag = 1;
        }
        else
        {
            cout << i+1 << endl;
            flag = 0;
            break;
        }
    }
    // if the loop don't access
    // in the break point then print 0
    if(flag==1)
        cout << 0 << endl;

    return 0;
}

