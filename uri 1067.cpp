#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,i;
    cin>>x;

    for (i=1;i<=1000;i++){
        if (i%2 != 0 && i<=x){
            cout<<i<<endl;
         }
    }

    return 0;
}


