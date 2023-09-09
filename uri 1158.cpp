#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, y;

    cin >> n;

    while(n--)
    {
        cin >> x >> y;

        int cnt = 0, sum = 0;

        // calculating sum of
        // odd sequence from x
        for(i=x; cnt<y; i++)
        {
            if(i%2!=0)
            {
                sum+=i;

                // counting odd numbers
                cnt++;
            }

        }
        // displaying sum
        cout << sum << endl;
    }

    return 0;
}



