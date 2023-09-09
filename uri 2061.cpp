#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i;
    char ch[10];

    cin >> n >> m;

    /* if the string is "fechou" then
     open new tab other wise closed */

    for (i=0; i<m; i++)
    {
        cin >> ch;

        if (ch[0]=='f')
        {
            n++;
        }
        else if (ch[0]=='c')
        {
            n--;
        }
    }
    cout << n << endl;

    return 0;
}

