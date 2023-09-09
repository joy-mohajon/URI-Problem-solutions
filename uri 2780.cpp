#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    // displaying a integer
    //according to distance range
    if (n<=800)
    {
        cout << 1 << endl;
    }
    else if (800<n && n<=1400)
    {
        cout << 2 << endl;
    }
    else if (1400<n && n<=2000)
    {
        cout << 3 << endl;
    }

    return 0;
}


