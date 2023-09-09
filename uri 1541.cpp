#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, size;

    while (cin >> a)
    {
        if (a==0)
            break;

        cin >> b >> c;

        // calculating size of the land
        d = a * b * 100 / c;

        size = sqrt(d);

        //displaying ...
        cout << size << endl;
    }
    return 0;
}


