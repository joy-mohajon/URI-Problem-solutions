#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, a, b, a1=0, b1=0;

    //test case
    cin>>n;

    for (j=0; j<n; j++)
    {
        cin>>a>>b;

        /* if else statement used to
        find out which one the starting
        point between a & b for
        find out sum of the odd
        numbers between them */

        if (a>b)
        {
            for (i=b+1; i<a; i++)
            {
                // find out sum of the
                // odd numbers
                if (i%2!=0)
                    b1=b1+i;
            }
            // displaying sum
            cout<<b1<<endl;
            b1=0;
        }
        else if (a<b)
        {
            for (i=a+1; i<b; i++)
            {
                // find out sum of the
                // odd numbers
                if (i%2!=0)
                    a1=a1+i;
            }
            // displaying sum
            cout<<a1<<endl;
            a1=0;
        }
        else
            cout<<"0\n";
    }
    return 0;
}

