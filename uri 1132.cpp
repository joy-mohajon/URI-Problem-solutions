#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i, s=0;

    cin >> x >> y;

    if (x<y)
    {
        /*find out which values are
        not divisible by 13 and
         displaying sum of them */

        for (i=x; i<=y; i++)
        {
            if (i%13!=0)
                s=s+i;
        }
        cout << s << endl;
    }
    else if (x>y)
    {
        for (i=y; i<=x; i++)
        {
            if (i%13!=0)
                s=s+i;
        }
        cout << s << endl;
    }

    return 0;
}


