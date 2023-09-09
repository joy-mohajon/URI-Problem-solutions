#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, MEDIA;

    //input 2 floating number
    cin >> A >> B;

    //calculating the student's average
    A = A * 3.5;
    B = B * 7.5;
    MEDIA = (A + B) / 11;

    //displaying the average
    cout << fixed;
    cout << setprecision(5) << "MEDIA = " << MEDIA << endl;

    return 0;
}

