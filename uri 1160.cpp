#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a, b, cnt;
    double c, d;

    //test case
    cin >> n;

    for (i=0; i<n; i++)
    {
        cnt=0;

        cin >> a >> b >> c >> d;

        // finding how many years need
        // for A to be getter than B
        while (a<=b)
        {
            // calculating population of A
            a = a + (a * (c / 100));

            // calculating population of B
            b = b + (b * (d / 100));

            // counting years
            cnt++;

            if (cnt>100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }

        if (cnt<=100)
            cout << cnt << " anos.\n";
    }
    return 0;
}


