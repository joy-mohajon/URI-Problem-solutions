#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d=0, i, p;

    for (i=1; i<=100; i++){

        cin>>n;

        // find out height value
        // and it's position
        if (n>d)
            d=n, p=i;
    }

    //displaying height value and position
    cout<<d<<endl;
    cout<<p<<endl;

    return 0;

}


