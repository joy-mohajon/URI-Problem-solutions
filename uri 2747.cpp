#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;

    /* There is no input.
    Displaying a structure ...  */

    // for first line
    for (i=0; i<39; i++)
    {
        cout << "-";
    }
    cout << endl;

    // for second to six line...
    for (j=0; j<5; j++)
    {
        for (i=0; i<39; i++)
        {
            if (i==0 || i==38)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // and last line..
    for (i=0; i<39; i++)
    {
        cout << "-";
    }
    cout << endl;

    return 0;
}


