#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, test = 1, cnt = 1;

    while (cin >> n)
    {
        /* counting the number of numbers
        that contains the complete sequence */
        for (i=0; i<=n; i++)
        {
            for (j=0; j<i; j++)
            {
                cnt++;
            }
        }

        // displaying case number
        if (n==0)
            cout << "Caso " << test << ": " << cnt << " numero" << endl;
        else
            cout << "Caso " << test << ": " << cnt << " numeros" << endl;

        // displaying the complete sequence
        cout << "0";
        for (i=1; i<=n; i++)
        {
            for (j=0; j<i; j++)
            {
                cout << " " << i;
            }
        }
        cout << endl << endl;

        cnt = 1;
        test++;
    }
    return 0;
}


