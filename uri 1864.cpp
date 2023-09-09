#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    char ch[35];

    // string copy to a character arrays
    strcpy(ch,"LIFE IS NOT A PROBLEM TO BE SOLVED");

    while (cin >> n)
    {
        // displaying i'th character according to string
        for (i=0; i<n; i++)
        {
            cout << ch[i] ;
        }
        cout << endl;
    }
    return 0;
}

