#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, cnt, kg = 0;
    float preco, total = 0.0;
    char c;
    string frutas;

    // test case
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cnt = 0;

        // input a floating value
        cin >> preco;
        // for skip new line
        c = getchar();

        // calculating total amount spent
        total += preco;

        // input a string
        getline(cin, frutas);

        /*calculating quantity of space(ascii
         value 32) in string because of
         quantity + 1 = kg (per test case) */

        for(j = 0; j<frutas.size(); j++)
        {
            if(frutas[j] == 32)
                cnt++;
        }

        // calculating amount of kg
        kg += cnt+1;

        // displaying amount of kg per day
        cout << "day " << i+1 << ": " << cnt+1 << " kg\n";
    }
    cout << fixed;
    // displaying average
    cout << setprecision(2) << (float)kg/n << " kg by day" << endl;
    cout << "R$ " << setprecision(2) << total/n << " by day" << endl;

    return 0;
}

