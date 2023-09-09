#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    // the number of row and column
    cin >> x >> y;

    // displaying the color of the
    // lower right corner of the board
    if(x%2!=0)
    {
        if(y%2!=0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
    {
        if(y%2!=0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}

