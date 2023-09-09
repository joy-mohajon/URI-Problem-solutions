#include<bits/stdc++.h>

using namespace std;

/* Problem is solved using by 2D array */

int main()
{
    int x, y, i, j;

    //the number of people and the
    // number of considered dates
    while(cin >> x >> y)
    {
        int arr[y][x], temp=-1, cnt=0;
        char ch[y][20];

        // input a date and people's decision
        for (i=0; i<y; i++)
        {
            cin >> ch[i];

            for (j=0; j<x; j++)
            {
                cin >> arr[i][j];
            }
        }

        /* looking for a date on which
        date all people can show up
        at the pizzeria. */

        for (i=0; i<y; i++)
        {
            for (j=0; j<x; j++)
            {
                // counting the number of
                // people who can show up.
                if(arr[i][j]==1)
                {
                    cnt++;
                }
            }

            if(cnt == x)
            {
                // if all the people can show up
                // then store the date and exit
                temp = i;
                break;
            }
            else
            {
                cnt = 0;
            }
        }

        // displaying the date otherwise print other things
        if (temp==-1)
            cout << "Pizza antes de FdI" << endl;
        else
            cout << ch[temp] << endl;
    }
    return 0;
}

