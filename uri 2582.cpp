#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, s;

    // test case
    cin >> n;

    while(n--)
    {
        // input button's number
        cin >> x >> y;

        s = x + y;

        // displaying the name of the
        // song according to the sum
        if (s==0)
        {
            cout << "PROXYCITY" << endl;
        }
        else if (s==1)
        {
            cout << "P.Y.N.G." << endl;
        }
        else if (s==2)
        {
            cout << "DNSUEY!" << endl;
        }
        else if (s==3)
        {
            cout << "SERVERS" << endl;
        }
        else if (s==4)
        {
            cout << "HOST!" << endl;
        }
        else if (s==5)
        {
            cout << "CRIPTONIZE" << endl;
        }
        else if (s==6)
        {
            cout << "OFFLINE DAY" << endl;
        }
        else if (s==7)
        {
            cout << "SALT" << endl;
        }
        else if (s==8)
        {
            cout << "ANSWER!" << endl;
        }
        else if (s==9)
        {
            cout << "RAR?" << endl;
        }
        else if (s==10)
        {
            cout << "WIFI ANTENNAS" << endl;
        }
    }

    return 0;
}

