#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    char st[10][35];

    // input 10 name
    for (i=0; i<10; i++)
    {
        cin >> st[i];
    }

    // print 3'th name
    cout << st[2] << endl;
    // print 7'th name
    cout << st[6] << endl;
    // print 9'th name
    cout << st[8] << endl;

    return 0;
}

