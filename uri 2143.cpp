#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, n;

    while (1)
    {
        // test case
        cin >> t;

        if (t==0)
            break;

        for (i=0; i<t; i++)
        {
            // the number of people
            cin >> n;

            // calculating the sum based on
            //the number is even or odd
            if (n%2==0)
                cout << n*2-2 << endl;
            else
                cout << n*2-1 << endl;
        }
    }
    return 0;

}

