#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b;

    /* displaying A, B, C depend
     on the value of a and b  */

    if(a==1 && b==1)
    {
        cout << "A" << endl;
    }
    else if(a==1 && b==0)
    {
        cout << "B" << endl;
    }
    else if (a==0 && b==1 || a==0 && b==0)
    {
        cout << "C" << endl;
    }

    return 0;
}

