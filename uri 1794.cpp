#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a;

    cin >> b >> c;

    cin >> d >> e;

    //displaying according to the
    //question requirement depend
    //on input value
    if(b<=a && a<=c)
    {
        if(d<=a && a<=e)
            cout << "possivel\n";
        else
            cout << "impossivel\n";
    }
    else
        cout << "impossivel\n";

    return 0;
}
