#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,s[3],j;
    // constant values
    s[0]=7;
    s[1]=6;
    s[2]=5;

    /* in this sequence j is increasing
    by 2 for the every odd values of i */

    // for the odd values
    for (i=1; i<10; i=i+2)
    {
        for (j=0; j<3; j++)
            cout<<"I="<<i<<" J="<<s[j]--<<endl;

        // increasing by 2
        s[0]=s[0]+3;
        s[1]=s[1]+3;
        s[2]=s[2]+3;
    }
    return 0;
}

