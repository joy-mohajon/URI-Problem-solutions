#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a, b, c;

    cin >> n;
        a=1;
        b=2;
        c=3;

    // displaying sequence where
    // difference 4 between per line

    for (i=0; i<n; i++)
    {
        cout << a << " " << b << " " << c << " PUM" << endl;
        a+=4;
        b+=4;
        c+=4;
    }

    return 0;
}

