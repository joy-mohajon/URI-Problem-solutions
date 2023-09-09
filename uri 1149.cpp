#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, a, n, sum=0;

    cin >> a;

    // input the value of n
    //until n is getter than 0
    while (cin >> n)
    {
        if (n>0)
        {
            for (i=0; i<n; i++)
            {
                // calculating sum of
                //n numbers from a
                sum=sum+a;
                a++;
            }
            break;
        }

    }

    //displaying
    cout << sum << endl;
    return 0;
}

