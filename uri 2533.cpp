#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, m;

    while(cin >> m)
    {
        int n[m], c[m];
        double s1=0, s2=0, api;

        // the grade of subjects
        // and its workload
        for(i=0; i<m; i++)
        {
            cin >> n[i] >> c[i];
        }

        /* calculating API according
        to question's formula */

        for(i=0; i<m; i++)
        {
            s1 += n[i] * c[i];
            s2 += c[i];
        }

        api = (s1 / (s2 * 100));

        // displaying API...
        cout << fixed;
        cout << setprecision(4) << api << endl;
    }
    return 0;
}

