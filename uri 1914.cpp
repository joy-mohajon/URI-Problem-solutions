#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, sum;
    long long int m, n;
    char a1[101], a2[6], a3[101], a4[6];

    // test case
    cin >> N;

    for (i=0; i<N; i++)
    {
        cout >> a1 >> a2 >> a3 >> a4;
        cin >> m >> n;

        sum = m + n;

        /* Determine whether the sum
         of their numbers is even or
         odd according to their choice */

         /* if sum is even then print
        the name of the player
        who choice "PAR"other wise
        print second player  */

        if (a2[0]=='P')
        {
            if (sum % 2 == 0)
                cout << a1 << endl;
            else
                cout << a3 << endl;
        }
        else if (a2[0]=='I')
        {
            if (sum % 2 == 0)
                cout << a3 << endl;
            else
                cout << a1 << endl;
        }
    }

    return 0;
}

