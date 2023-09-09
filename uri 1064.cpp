#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, cnt = 0;

    float x, sum = 0, d;

    for (i=0; i<6; i++)
    {
        cin>>x;

        if (x>0)
        {
            //calculating quantity
            //of positive numbers

            cnt++;

            sum=sum+x;
        }
    }
    // calculating average positive numbers

    d = sum/cnt;

    //displaying the amount of positive numbers
    //and the average of the positive values

    cout<<fixed;

    cout<<cnt<<" valores positivos"<<endl;

    cout<<setprecision(1)<<d<<endl;

    return 0;
}

