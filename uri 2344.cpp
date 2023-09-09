#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a;

    /* displaying A, B, C, D, & E
    depend on range between 0 - 100
    that is given in the question */

    if (a==0)
    {
        cout << "E" << endl;
    }
    else if(1<=a && a<=35)
    {
        cout << "D" << endl;
    }
    else if (36<=a && a<=60)
    {
        cout << "C" << endl;
    }
    else if (61<=a && a<=85)
    {
        cout << "B" << endl;
    }
    else if(86<=a && a<=100)
    {
        cout << "A" << endl;
    }

    return 0;
}
