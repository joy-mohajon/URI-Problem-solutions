#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6], i, j;

    double n, bonus, v1, v2;

    // test case
    cin >> n;

    for (i=0; i<n; i++)
    {
        // the value of the bonus
        cin >> bonus;

        // the attack value, defense value,
        //and the level of Pokemon and Guarte.
        for (j=0; j<6; j++)
            cin >> arr[j];

        // if the level value of pokemon
        // is even then bonus will add
        if (arr[2]%2==0)
            v1 = ((arr[0] + arr[1]) / 2) + bonus;
        else
            v1 = ((arr[0] + arr[1]) / 2);

        // if the level value of Guarte
        // is even then bonus will add
        if (arr[5]%2==0)
            v2 = ((arr[3] + arr[4]) / 2) + bonus;
        else
            v2 = ((arr[3] + arr[4]) / 2);

        // taking decision who is won the game.
        if (v1>v2)
            cout << "Dabriel" << endl;
        else if (v1<v2)
            cout << "Guarte\n";
        else
            cout << "Empate\n";
    }
    return 0;
}
