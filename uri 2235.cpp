#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    // taking decision depend on their credits
    if (a==b || a==c || b==c)
    {
        cout << "S\n";
    }
    else if(a+b==c || a+c==b || b+c==a)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n"
    }

    return 0;
}

