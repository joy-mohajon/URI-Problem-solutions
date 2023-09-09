#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, c;

    while(1)
    {
        cin >> a >> b;

        // exit point
        if (a==0 && b==0)
            break;

        // find out c
        c = (a * 3) - (a + b);

        // displaying the value of c
        cout << c << endl;
    }
    return 0;
}


