#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char hex[50];

    cin >> n;

    // converting to hexadecimal
    sprintf(hex, "%X", n);

    // displaying ...
    cout << hex << endl;

    return 0;
}
