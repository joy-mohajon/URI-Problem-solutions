#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt=0, sum=0;

    // calculating average
    while (cin >> n)
    {
        if(n<0)
            break;

        sum=sum+n;

        cnt++;
    }

    // displayiing
    cout << fixed;
    cout << setprecision(2) << (double)sum/cnt << endl;

    return 0;
}

