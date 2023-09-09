#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double n;
    char ch[130];

    // inputing precision floating point
    cin >> n;

    // converting to the scientific notation
    sprintf(ch,"%LE", n);

    if (ch[0]!='-')
        cout << "+";

    // displaying ...
    printf("%.4LE\n",n);

    return 0;
}



