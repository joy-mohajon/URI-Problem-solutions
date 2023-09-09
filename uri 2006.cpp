#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, cnt = 0;

    // input the tea type
    cin >> t;

    for (i=0; i<5; i++)
    {
        cin >> n;

        /* if the tea type is found in
        the answer given by each
        contestant, the number of correct
        guesses is being calculate */

        if (t==n)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

