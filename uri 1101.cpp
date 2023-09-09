#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, sum=0, j, i;

    for (j=0; j<100; j++)
    {

        cin>>m>>n;

        if (m<=0 || n<=0) break;

        /* if else statement used to
        find out which one the starting
        point between a & b for find out
        sum of numbers between of them */

        if (m>n)
        {
            // calculating and displaying
            // sum of numbers between a & b

            for(i=n; i<=m; i++)
            {
                sum+=i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
            sum=0;
        }
        else
        {
            // calculating and displaying
            // sum of numbers between a & b

            for(i=m; i<=n; i++)
            {
                sum+=i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
            sum=0;
        }
    }
    return 0;
}


