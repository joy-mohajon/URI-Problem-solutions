#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,j=0,s=0;
    cin>>n;

    for (i=0; i<n; i++)
    {
        cin>>x;

        /* couting input values that are
        in the interval [10,20] and out
        of the interval. */

        if (10<=x && x<=20)
            j++;
        else if (10>x || x>20)
            s++;

    }

    //displaying counting values
    cout<<j<<" in\n";
    cout<<s<<" out\n";

    return 0;
}


