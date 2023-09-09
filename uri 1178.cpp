#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;

    double a;

    cin >> a;

    // displaying sequence
    for (i=0; i<100; i++)
    {
        cout << fixed;
        cout << "N[" << i << "] = " << setprecision(4) << a << endl;

        // calculating half the previous position
        a=a/2;
    }
    return 0;
}

