#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i;
    cin >> x >> y;

    /* displaying all numbers between
    x and y which are divided by 5 where
    the rest is equal to 2 or equal to 3. */

    if (x<y)
    {
        for (i=x+1; i<y; i++)
        {
            if (i%5==2)
                cout << i << endl;
            else if (i%5==3)
                cout << i << endl;
        }
    }
    else if (x>y)
    {
        for (i=y+1; i<x; i++)
        {
            if (i%5==2)
                cout << i << endl;
            else if (i%5==3)
                cout << i << endl;
        }
    }

    return 0;
}
