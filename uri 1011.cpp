#include<bits/stdc++.h>
#define pi 3.14159

using namespace std;

int main()
{
    double R, S;

    //input floating number
    cin>>R;

    //calculating the volume using by question's formula
    S = 4 / 3.0 * pi * R * R * R;

    //displaying the volume
    cout << fixed;
    cout << setprecision(3) << "VOLUME = " << S << endl;


    return 0;
}

