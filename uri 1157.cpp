#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    // displaying all divisors
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
            cout << i << endl;

    }


    return 0;
}
