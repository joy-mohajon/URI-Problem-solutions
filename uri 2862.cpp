#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;

    // test case

    cin >> n;

    while(n--)
    {
        //input a integer
        cin >> d;

        // when It's over 8000 then print
        //"Mais de 8000!" otherwise "Inseto!"
        if (d>8000)
            cout << "Mais de 8000!" << endl;
        else
            cout << "Inseto!" << endl;
    }

    return 0;
}


