#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i, s;

    cin >> n;


    x=n+1; //starting point of loop
    s=n+12; //limitation of loop

    for(i=x; i<s; i++)
    {
        //displaying consecutive odd numbers
        if(i%2!=0)
            cout<<i<<endl;
    }


    return 0;
}


