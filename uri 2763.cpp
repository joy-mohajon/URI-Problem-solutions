#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    char st[15];

    // input as a string
    cin >> st;

    // displaying the string part by part
    for (i=0; i<strlen(st); i++)
    {
        if(st[i]=='.' || st[i]=='-')
            cout << "\n";
        else
            cout << st[i];
    }
    cout << "\n";

    return 0;
}


