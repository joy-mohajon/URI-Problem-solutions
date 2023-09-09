#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, x[1002], s=0, posi;

    // test case
    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> x[i];

        // find out smallest value
        if (s>x[i])
        {
            s = x[i];
            //storing position
            posi =  i;
        }
    }
    // displaying value withe it's position
    cout << "Menor valor: " << s << endl
         << "Posicao: " << posi << endl;

    return 0;
}

