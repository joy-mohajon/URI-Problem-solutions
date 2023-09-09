#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, len, temp, flag=0;
    string str;

    // input the real number as a string
    getline(cin, str);

    len = str.size();

    // find out the decimal point in the string
    for (i=0; i<len; i++)
    {
        if (str[i]=='.')
        {
            temp = i;
        }
    }

    // displaying a part of the string
    //that is after the decimal point
    //where first character cannot be '0'.
    for(i=temp+1; i<len; i++)
    {

        if (flag==0)
        {
            if (str[i]=='0')
            {
                continue;
            }
            else
            {
                cout << str[i];
                flag = 1;
            }
        }
        else
        {
            cout << str[i];
        }
    }

    cout << ".";

    // displaying the first part of the string
    for (i=0; i<temp; i++)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}

