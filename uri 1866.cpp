#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c, n, i;

    // test case
    cin >> c;

    /* if inputed value is even
    then print 0 because even
    number means there are same
    number of 1 and -1 in the
    series, other wise print 1 */

    for (i=0; i<c; i++)
    {
        cin >> n;

        if (n%2==0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}

