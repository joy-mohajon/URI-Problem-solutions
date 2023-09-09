#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0, i, x;

    for (i=0;i<5;i++){
        cin>>x;

        //calculating quantity
        //of even numbers

        if (x%2==0)
            cnt++;
    }

    // displaying quantity of even number
    cout<<cnt<<" valores pares"<<endl;

    return 0;
}

