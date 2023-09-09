#include<bits/stdc++.h>

using namespace std;

int main()
{
    char name[10];
    double a, b, TOTAL;

    //input 1 string, 2 floating numbers
    cin >> name >> a >> b;

    //calcutating total salary where 15% over all products sold
    TOTAL = a + ((b * 15) / 100);

    //displaying tatal salary
    cout << fixed;
    cout << setprecision(2) << "TOTAL = R$ " << TOTAL << endl;

    return 0;
}

