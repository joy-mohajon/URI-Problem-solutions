#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, i;

    cin >> a >> b >> c;

    /* printing a happy or a sad
    smiley depend on some conditions
    which are displaying at the below */

    if (a>b)
        if (b<=c)
            cout << ":)" << endl;

    if (a<b)
        if (b>=c)
            cout << ":(" << endl;

    if (a<b && b<c && c-b<b-a)
        cout << ":(" << endl;

    if (a<b && b<c && c-b>=b-a)
        cout << ":)" << endl;

    if (a>b && b>c && b-c<a-b)
        cout << ":)" << endl;

    if (a>b && b>c && b-c>=a-b)
        cout << ":(" << endl;

    if (a==b)
    {
        if (b<c)
            cout << ":)" << endl;
        else
            cout << ":(" << endl;
    }

    return 0;
}


