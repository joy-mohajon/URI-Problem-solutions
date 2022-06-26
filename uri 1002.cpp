#include<bits/stdc++.h>

using namespace std;

int main()
{
    double R, A;
    double PI=3.14159;

    //input R
    cin>>R;

    //calculate the area of a circumference
    A = PI*R*R;

    //displaying the area
    cout<<fixed;
    cout<<setprecision(4)<<"A="<<A<<endl;

    return 0;
}


