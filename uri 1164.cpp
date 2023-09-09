#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i, j, s=0;

    // test case
    cin >> n;

    for (i=0; i<n; i++)
    {
        // input value for checking perfect
        cin >> x;

        // calculating sum of divisors of x
        for (j=1; j<x; j++)
        {
            if (x%j==0)
                s+=j;
        }

        // taking decision and displaying
        if (s==x)
            cout << x << " eh perfeito\n";

        else
            cout << x << " nao eh perfeito\n";

        s=0;
    }


    return 0;
}

