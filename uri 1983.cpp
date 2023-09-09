#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, reg;
    double y, max=0;

    cin >> n;

    /* here finding highest score and
    storing the student's registration number */

    for (i=0; i<n; i++)
    {
        cin >> x >> y;

        if (max < y)
        {
            max = y;
            reg = x;
        }
    }
    // if max score is less than 8 then not
    //eligible otherwise print registration number
    if (max < 8)
        cout << "Minimum note not reached" << endl;
    else
        cout << reg << endl;

    return 0;

}

