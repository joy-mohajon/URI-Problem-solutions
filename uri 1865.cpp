#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c, i, n;

    char ch[5];

    // test case
    cin >> c;

    /* if inputed string is
    equal to "Thor" then print
     Y other wise print N  */

    for (i=0; i<c; i++)
    {
        cin >> ch >> n;

        if (strcmp(ch,"Thor")==0)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}

