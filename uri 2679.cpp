#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;

    cin >> a;

    // returning a even number that
    // is larger than input value
    if(a%2==0)
        cout << a+2 << endl;
    else
        cout << a+1 << endl;

    return 0;
}
