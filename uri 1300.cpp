#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        /* find out whether the
        input value is divided by 6 */

        if(n%6==0)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}



