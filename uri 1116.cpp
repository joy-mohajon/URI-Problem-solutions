#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    float x, y;

    // test case
    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> x >> y;

        /* calculating division between them,
        if it is possible so displaying the
        result of this division otherwise
        print “divisao impossivel” */

        // it is not possible if y is 0
        if (y==0)
            cout << "divisao impossivel" << endl;
        else
        {
            cout << fixed;
            cout << setprecision(1) << x/y << endl;
        }

    }
    return 0;
}

