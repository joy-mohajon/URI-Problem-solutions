#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, j, a, b;

    cin >> n;

    // displaying sequence

    for (j=1; j<=n; j++)
    {
        cout << j << " " << j*j << " " << j*j*j << endl;

        a=(j*j)+1;

        b=(j*j*j)+1;

        cout << j << " " << a << " " << b << endl;
    }
    return 0;
}

