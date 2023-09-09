#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i, j;

    // input array size
    while(cin >> n)
    {
        int ar[n];
        char st[n];

        // input array's values
        for(i=0; i<n; i++)
        {
            cin >> ar[i] >> st[i];
        }

        int cnt=0;

        //calculating pairs of boots
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if (ar[i]==ar[j])
                {
                    if(st[i]=='E' && st[j] == 'D' || st[j]=='E' && st[i] == 'D')
                    {
                        //counting pair
                        cnt++;
                        // not for again count
                        st[j]='A';
                        break;
                    }
                }
            }
        }
        //displaying
        cout << cnt << endl;
    }

    return 0;;
}


