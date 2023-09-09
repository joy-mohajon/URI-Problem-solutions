#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i;
    while(1)
    {
        cin >> x >> y;

        /* displaying quadrant name
        which these coordinates belong */

        if (x>0 && y>0)
            cout << "primeiro\n";
        else if (x>0 && y<0)
            cout << "quarto\n";
        else if (x<0 && y<0)
            cout << "terceiro\n";
        else if (x<0 && y>0)
            cout << "segundo\n";
        else if (x==0 || y==0)
            break;
    }
    return 0;
}


