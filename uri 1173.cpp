#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n;

    cin >> n;

    cout << "N[0] = " << n << endl;

    /* calculating and displaying
    the values which are double
     of previous value */

    for (i=1; i<10; i++)
    {
        n = n * 2;
        cout << "N[" << i << "] = " << n << endl;
    }

    return 0;
}



