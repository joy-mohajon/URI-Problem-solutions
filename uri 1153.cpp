#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, s=1;

    cin >> n;

    // calculating factorial of n
    for(i=n; i>=1; i--)
    {

        s=s*i;
    }

    // displaying factorial result
    cout << s << endl;

    return 0;
}
