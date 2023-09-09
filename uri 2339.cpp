#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    // if condition is true
    //then print S otherwise N
    if (b>=a*c)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
