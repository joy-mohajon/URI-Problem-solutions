#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, len;
    char ch[20];

    // input the number as a string
    cin >> ch;

    // find out the length of the string
    len = strlen(ch);

    // displaying the string reversely
    for (i=len-1; i>=0; i--)
        cout << ch[i];

    cout << endl;

    return 0;

}

