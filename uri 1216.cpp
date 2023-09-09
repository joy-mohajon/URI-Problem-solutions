#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt=0;
    char c;
    string str;
    double n, sum=0;

     /* input a string and an integer
     (getchar() use for skip new line )
     then calculating sum of distance */

    while(getline(cin, str))
    {
        cin >> n;
        c = getchar();
        sum += n;
        cnt++;
    }

    // displaying average of distance
    cout << fixed;
    cout << setprecision(1) << sum/cnt << endl;

    return 0;
}





