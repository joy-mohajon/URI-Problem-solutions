#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, len ;
    string str;

    // input a string
    while(getline(cin, str))
    {
        len = str.size();

        // displaying the string according
        // to question's requirements
        for (i=0; i<len ; i++)
        {
            if (str[i]==',')
                cout << "\n";
            else
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}


