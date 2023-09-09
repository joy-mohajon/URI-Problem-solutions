#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while(1)
    {
        int len, flag_1=0, flag_2=0;

        getline(cin, str);

        if (str[0]=='*')
            break;

        /* first character of every
        word per line have to be same
        then print 'Y' otherwise print 'N' */

       int i, j=0;

        for (i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
            {
                // for 1 word
                flag_2 = 1;

                // check out first character of a word
                if(str[0]==str[i+1] || str[0]==(str[i+1]+32) || str[0]==(str[i+1]-32))
                    flag_1 = 1;
                else
                {
                    flag_1 = 0;
                    break;
                }
            }
        }

        // displaying
        if (flag_1==1 || flag_2==0)

            cout << "Y" << endl;

        else if(flag_1==0)

            cout << "N" << endl;
    }

    return 0;
}

