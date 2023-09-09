#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;

    // displaying a structure
    for (i=0; i<10; i++)
    {
        if (i==0)
        {
            for (j=0; j<8; j++)
            {
                if (j==7)
                    cout << "A" << endl;
                else
                    cout << " " ;
            }
        }
        else if (i==1)
        {
            for (j=0; j<7; j++)
            {
                if (j==6)
                    cout << "B B" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==2)
        {
            for (j=0; j<6; j++)
            {
                if (j==5)
                    cout << "C   C" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==3)
        {
            for (j=0; j<5; j++)
            {
                if (j==4)
                    cout << "D     D" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==4)
        {
            for (j=0; j<4; j++)
            {
                if (j==3)
                    cout << "E       E" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==5)
        {
            for (j=0; j<5; j++)
            {
                if (j==4)
                    cout << "D     D" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==6)
        {
            for (j=0; j<6; j++)
            {
                if (j==5)
                    cout << "C   C" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==7)
        {
            for (j=0; j<7; j++)
            {
                if (j==6)
                    cout << "B B" << endl;
                else
                    cout << " ";
            }
        }
        else if (i==9)
        {
            for (j=0; j<8; j++)
            {
                if (j==7)
                    cout << "A" << endl;
                else
                    cout << " ";
            }
        }
    }

    return 0;
}


