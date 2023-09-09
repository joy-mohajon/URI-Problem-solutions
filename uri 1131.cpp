#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, test=0, n = 1;

    int cnt1=0, cnt2=0, cnt3=0;

    //display statistics of counting
    // win and drow match

    while (n!=2)
    {
        cin >> a >> b;

        //How many GRENAIS were part of the statistics.
        test++;

        if (a>b)
        //The number of victories of Inter.
            cnt1++;

        else if (a<b)
        //The number of victories of Gremio.
            cnt2++;

        else if (a==b)
        // The number of Draws.
            cnt3++;

        cout << "Novo grenal (1-sim 2-nao)\n";

        cin >> n;
    }

    cout << test << " grenais\n";
    cout << "Inter:" << cnt1 << endl;
    cout << "Gremio:" << cnt2 << endl;
    cout << "Empates:" << cnt3 << endl;

    if (cnt1>cnt2)

        cout << "Inter venceu mais\n" ;

    else if (cnt1<cnt2)

        cout << "Gremio venceu mais\n";

    else

        cout << "Não houve vencedor\n";


    return 0;
}
