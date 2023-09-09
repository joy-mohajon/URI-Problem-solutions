#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=1, j=60;

    cout<<"I=1 J=60"<<endl;

    /* in this sequence i increase
    by 3 and j decrease by 5 when j
    is 0 then break the loop */

    do
    {
        i=i+3;// i increase by 3
        j=j-5;// j decrease by 5

        // displaying sequence
        cout<<"I="<<i<<" J="<<j<<endl;
    }
    while (j!=0); //breaking point

    return 0;
}


