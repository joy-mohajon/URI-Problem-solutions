#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n;

    while(1)
    {
        int k = 1;
        string s;

        // input number of character
        cin >> n;
        if(n==0)
            break;

        // input string
        cin >> s;

        /* increasing k when get
        character 'D' otherwise
        decreasing the value of k.
        Here k is rotating
        from 1 to 5   */

        for(i=0; i<n; i++)
        {
            if(s[i]=='D')
            {
                k++;
                if(k==5)
                    k=1;
            }
            else if(s[i]=='E')
            {
                k--;
                if(k==0)
                    k=4;
            }

        }

        //displaying N, L, S, O
        //depend on the value of k
        if(k==1)
        {
            cout << "N" << endl;
        }
        else if(k==2)
        {
            cout << "L" << endl;
        }
        else if(k==3)
        {
            cout << "S" << endl;
        }
        else if(k==4)
        {
            cout << "O" << endl;
        }
    }
    return 0;
}




