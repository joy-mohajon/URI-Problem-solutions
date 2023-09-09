#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, i, n;
    double b, s=0;

    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> a >> b;

        /* calculating the sum of the purchase
        amount of the product according to the
        product number and its value which
        is already given in the question  */

        if (a==1001)
            s = s + b * 1.50;

        else if (a==1002)
            s = s + b * 2.50;

        else if (a==1003)
            s = s + b * 3.50;

        else if (a==1004)
            s = s + b * 4.50;

        else if (a==1005)
            s = s + b * 5.50;
    }
    cout << fixed;
    cout << setprecision(2) << s << endl;

    return 0;
}
