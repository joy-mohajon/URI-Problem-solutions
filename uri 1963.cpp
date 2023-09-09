#include<bits/stdc++.h>

using namespace std;

int main()
{
    double old, neww, rest, per;

    cin >> old >> neww;

    // calculating percentage of price

    rest = neww - old;

    per = (rest * 100) / old;

    cout << fixed;
    cout << setprecision(2) << per << "%" << endl;

    return 0;

}


