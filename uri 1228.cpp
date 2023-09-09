#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;

    // input array size
    while(cin >> n)
    {
        int ar[n], br[n];

        // input first array values
        for(i=0; i<n; i++)
        {
            cin >> ar[i];
        }

        // input second array values
        for(i=0; i<n; i++)
        {
            cin >> br[i];
        }

        int k, l, t, cnt=0;

        //calculating the minimum
        //number of overtakes
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(ar[i]==br[j])
                {
                    k = j;
                    break;
                }
            }
            for(l=0; l<i; l++)
            {
                for(t=k+1; t<n; t++)
                {
                    if(ar[l]==br[t])
                        cnt++;
                }
            }
        }

        // displaying number of overtakes
        cout << cnt << endl;
        printf("%d\n",cnt);
    }

    return 0;
}

