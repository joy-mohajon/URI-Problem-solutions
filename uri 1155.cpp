#include<bits/stdc++.h>

using namespace std;

int main()
{
    float s=1, d, i;

    // calculating sum of divisions
    for (i=2; i<=100; i++)
    {
        d = 1 / i;
        s = s + d;
    }

    // displaying sum
    cout << fixed;
    cout << setprecision(2) << s << endl;

    return 0;
}



