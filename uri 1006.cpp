#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, MEDIA;

    //input 3 floating number
    cin >> A >> B >> C;

    //calculating the average
    A = A * 2;
    B = B * 3;
    C = C * 5;
    MEDIA = (A + B + C) / 10;

    //displaying the average
    cout << fixed;
    cout << setprecision(1) << "MEDIA = " << MEDIA << endl;

    return 0;
}

