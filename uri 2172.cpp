#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m, n, d;

    while (cin >> m >> n)
    {
        if (m==0 && n==0)
            break;

        //calculating multiply between of them
        d = m * n;

        // displaying the result of multiplication
        cout << d << endl;
    }
    return 0;
}

