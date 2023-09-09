#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    while(1)
    {
        cin >> n;

        if(n==0)
            break;

        int cnt = 0, sum = 0;

        // calculating sum of
        // even sequence from n
        for(i=n; cnt<5; i++)
        {
            if(i%2==0)
            {
                sum+=i;

                // counting even numbers
                cnt++;
            }

        }

        // displaying sum
        cout << sum << endl;
    }

    return 0;
}
