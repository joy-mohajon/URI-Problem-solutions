#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    char str[10000];
    float len, time;

    // test case
    cin >> n;

    for (i=0; i<n; i++)
    {
        // string
        cin >> str;

        // length of string
        len = strlen(str);

        // calculating spent time
        time = len / 100;

        // displaying ...
        cout << fixed;
        cout << setprecision(2) << time << endl;
    }

    return 0;

}

