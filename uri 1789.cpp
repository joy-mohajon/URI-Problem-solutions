#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d, n, s, i;

    while (cin >> n)
    {
        s=0;
        // finding highest value in the series
        for (i=0; i<n; i++)
        {
            cin >> d;

            if (s<d)
                s=d;
        }
        //displaying 1, 2, 3 according to the question
        if (s<10)
            cout << 1 << endl;
        else if (s>=10 && s<20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}


