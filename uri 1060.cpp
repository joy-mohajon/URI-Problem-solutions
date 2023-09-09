#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0, i;
    float x;

     /* find out and displalying
    quantity of positive numbers */

    for (i=0; i<6; i++)
    {
        cin>>x;
        if (x>0)
            n++;
    }

    cout<<n<<" valores positivos"<<endl;

    return 0;
}

