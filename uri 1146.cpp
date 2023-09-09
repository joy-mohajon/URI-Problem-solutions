#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    while (cin >> n)
    {
        if (n==0)
            break;

        cout << 1;

        for (i=2; i<=n; i++)
        {
            cout << " " << i;
        }

        cout << endl;
    }

    return 0;
}


