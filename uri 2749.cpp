#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;

    /* displaying a structure according
     to question's requirements */

     // for first line
    for (i=0; i<39; i++)
    {
        cout << "-";
    }
    cout << endl;

    // for second to six line...
    for (j=0; j<5; j++)
    {
        if (j==0)
        {
            // displaying second line
            //with a string "x = 35".
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    cout << "|";
                }
                else if (i==1)
                {
                    cout << "x = 35";
                    i+=5;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else if (j==2)
        {
            // displaying 4'th line
            //with a string "x = 35".
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    cout << "|";
                }
                else if (i==16)
                {
                    cout << "x = 35";
                    i+=5;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }

        else if (j==4)
        {
            // displaying 6'th line
            //with a string "x = 35".
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    cout << "|";
                }
                else if (i==32)
                {
                    cout << "x = 35";
                    i+=5;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            // otherwise displaying space..
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    cout << "|";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    // and displaying last line...
    for (i=0; i<39; i++)
    {
        cout << "-";

    }
    cout << endl;

    return 0;
}


