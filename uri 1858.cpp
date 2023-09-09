#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, min, i, store;

    // possible highest value of t
    min = 20;

    cin >> n;

    // finding minimum value of the
    //number of times and the
    //number of the person
    for (i=1; i<=n; i++)
    {
        // input the number of times
        cin >> t;

        /* if input value is less
         than form the possible
         highest value then store
        the number of the person  */
        if (t < min)
        {
            min = t;
            store = i;
        }
    }
    // displaying the number of person
    cout << store << endl;

    return 0;
}

