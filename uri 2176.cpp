#include<bits/stdc++.h>

using namespace std;

int main()
{
    int len, cnt=1,i=0;

    string str;

    getline(cin, str);

    // calculating length of the message
    len = str.size();

    // counting the number of 1 in the message
    for(i=0; i<len; i++)
    {
        if (str[i]=='1')
            cnt++;
    }

    // if the number of count is even then
    //add 1 with the message otherwise add 0
    if (cnt%2==0)
        cout << str << "1" << endl;
    else
        cout << str << "0" << endl;

    return 0;
}

