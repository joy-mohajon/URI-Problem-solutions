#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    float i, j;

    /* Here firstly i=0, j = 1, 2, 3.
    I is increasing by .2 but J is I+J
    for every value of I */

    // increasing by .2
    for (i=0; i<2.1; i+=.2)
    {
        for (j=1; j<=3; j++)
        {
            /* if else statement used for don't
            get presentation error.It depends
            1 digit after the decimal point. */

            if (i>0 && i<1 || i>1 && i<2)
            {
                cout<<fixed;
                cout<<"I="<<setprecision(1)<<i<<" J="<<setprecision(1)<<i+j<<endl;
            }
            else
            {
                a=i;
                b=i+j;
                cout<<"I="<<a<<" J="<<b<<endl;
            }
        }
    }
    return 0;
}

