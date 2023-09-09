#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, ans = 0.0;

    // n means number of
    //repetition of formula
    cin >> n;

    // Here 6, 3 are come from
    //the formula of question
    while(n--)
    {
        ans+=6;
        ans = 1.0/ans;
    }
    ans += 3;

    cout << fixed;
    cout << setprecision(10) << ans << endl;

    return 0;
}
