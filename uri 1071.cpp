#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,i,r,sum=0;
    cin>>x>>y;

    if (x>y)
    {
        //define starting point of loop
        r=y+1;

        for (i=r; i<x; i++)
        {
            //find out sum of all odd numbers
            if (i%2 != 0)
                sum=sum+i;

        }
        //displaying sum
        cout<<sum<<endl;
    }
    else
    {
        //define starting point of loop
        r=x+1;

        for (i=r; i<y; i++)
        {
            //find out sum of all odd numbers
            if (i%2 != 0)
                sum=sum+i;
        }
        //displaying sum
        cout<<sum<<endl;
    }

    return 0;
}


