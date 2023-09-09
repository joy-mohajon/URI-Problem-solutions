#include<bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    string str;

    // input string
    getline(cin, str);

    // find out length of the string
    len = str.size();

    // displaying depend on this decision,
    // is it possible to tweet or not possible
    if (len<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}

