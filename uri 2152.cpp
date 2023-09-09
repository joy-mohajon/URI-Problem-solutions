#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, z, i;

    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> x >> y >> z;

        /* In that case specially decision
        depend on the value of z variable */

        // other if else statement use for print 0
        if (z==0)
        {
            if (y>=10 && x>=10)
            {
                cout << x << ":" << y << " - A porta fechou!" << endl;
            }
            else if (y<10 && x>=10)
            {
                cout << x << ":0" << y << " - A porta fechou!" << endl;
            }
            else if (x<10 && y>=10)
            {
                cout << 0 << x << ":" << y << " - A porta fechou!" << endl;
            }
            else if (x<10 && y<10)
            {
                cout << 0 << x << ":" << 0 << y << " - A porta fechou!" << endl;
            }
        }
        else
        {
            if (y<10 && x>=10)
            {
                cout << x << ":" << 0 << y << " - A porta abriu!" << endl;
            }
            else if (x<10 && y>=10)
            {
                cout << 0 << x << ":" << y << " - A porta abriu!" << endl;
            }
            else if (y>=10 && x>=10)
            {
                cout << x << ":" << y << " - A porta abriu!" << endl;
            }
            else if (x<10 && y<10)
            {
                cout << 0 << x << ":" << 0 << y << " - A porta abriu!" << endl;
            }
        }
    }
    return 0;

}

