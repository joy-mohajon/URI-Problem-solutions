#include<bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    string str;

    // input string
    getline(cin, str);

    // calculating length of the string
    len = str.size();

    /* if the length is more than 80
     print NO otherwise print YES  */

    if (len <= 80)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;

}

