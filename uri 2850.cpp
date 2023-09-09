#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while(getline(cin, str))
    {
        // displaying a string
        //according to question
        if (str[0]=='e')
        {
            cout << "ingles" << endl;
        }
        else if (str[0]=='d')
        {
            cout << "frances" << endl;
        }
        else if(str[0]=='n')
        {
            cout << "portugues" << endl;
        }
        else if (str[0]=='a')
        {
            cout << "caiu" << endl;
        }
    }
    return 0;
}

