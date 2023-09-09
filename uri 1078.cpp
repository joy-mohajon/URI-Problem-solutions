#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, d;

    cin>>n;

    //calculating and displaying
    //the multiplication table of n

    for (i=1; i<11; i++)
    {
        d=i*n;
        cout<<i<<" x "<<n<<" = "<<d<<endl;
    }


    return 0;
}


