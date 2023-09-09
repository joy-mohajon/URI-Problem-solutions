#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, p, s;

    cin >> m >> n >> p;

    s = m + n + p;

    /* actually it's have two
    conditions s>24 and s<24.
    But if sum of three integers
    is less than 24 then again
    check the sum is less than 0 */

    // and displayiong the time
    //specified in destination
    if (s==24)
        cout << "0\n";
    else if (s<24)
    {
        if (s<0)
            cout << 24+s << endl;
        else
            cout << s << endl;
    }
    else if (s>24)
        cout << s-24 << endl;

    return 0;
}

