#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n;
    double a, b, c, d;

    //input test case
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a>>b>>c;

        //calculating average which weights are 2, 3, 5
        d=(a*2+b*3+c*5);

        //displaying the weighted average
        cout<<fixed;
        cout<<setprecision(1)<<d/10<<endl;
    }

    return 0;
}

