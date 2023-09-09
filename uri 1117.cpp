#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, t=0;
    float n, s=0;

    while(1)
    {
        cin >> n;

        /* while find out 2 valid integer
        then print average of them  */

        if (d<0 || d>10)
            cout << "nota invalida\n";
        else
        {
            //count valid value
            t++;
            // calculate average
            s=s+n;
            // displaying and exit
            if (t==2)
            {
                cout << fixed;
                cout << "media = " << setprecision(2) << s/2 <<endl;
                break;
            }
        }

    }
    return 0;

}
