#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, t, i, s;

    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> t;
        /* if the input years is
        greater than equal 2015 then
        deduct 2014 from input years */
        if (t>=2015)
        {
            s = t - 2014;
            cout << s << endl;
        }
        // otherwise deduct input years from 2015
        else
        {
            s = 2015 - t;
            cout << s << endl;
        }
    }

    return 0;

}

