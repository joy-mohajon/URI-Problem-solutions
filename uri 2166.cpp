#include<stdio.h>

int main()
{
    double n, ans = 0.0;

    // repeating times
    cin >> n;

    // following question's formula
    while(n--)
    {
        ans += 2.0;

        ans = 1.0/ans;
    }
    ans += 1.0;

    // displaying the approximate value
    cout << ans << endl;

    return 0;
}
