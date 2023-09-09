#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, s;

    // the rest of the minute and
    //required minutes to manufacture
    cin >> n >> x >> y;

    s = x + y;

    // it is possible if the sum of the
    //required time is less than equal
    //to rest time otherwise isn't possible
    if (s<=n)
        cout << "Farei hoje!" << endl;
    else
        cout << "Deixa para amanha!" << endl;

    return 0;
}


