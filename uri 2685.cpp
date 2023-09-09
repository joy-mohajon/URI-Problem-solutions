#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        // displaying the time of a
        //day according to SmartWatch
        if ((0<=n && n<90) || n==360)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if (90<=n && n<180)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if (180<=n && n<270)
        {
            cout << "Boa Noite!!" << endl;
        }
        else if (270<=n && n<360)
        {
            cout << "De Madrugada!!" << endl;
        }
    }
    return 0;
}


