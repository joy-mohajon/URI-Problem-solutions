#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, len;
    char str[100];

    cin >> n;

    for(i=0; i<n; i++)
    {
        // input a string
        cin >> str;

        // find out length of the string
        len = strlen(str);

        // considering whether the length
        // is greater than 25 or not
        if(0<=len && len<=25)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
