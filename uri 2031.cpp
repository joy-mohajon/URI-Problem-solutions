#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    char plyr1[10],plyr2[10];

    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> plyr1 >> plyr2;

        // displaying decision according to
        // the rules to determine a winner
        if (plyr1[1]=='t')
        {
            if (plyr2[1]=='e' || plyr2[1]=='a')
            {
                cout << "Jogador 1 venceu\n" ;
            }
        }
        else if (plyr1[1]=='a' || plyr1[1]=='e')
        {
            if (plyr2[1]=='t')
            {
                cout << "Jogador 2 venceu\n";
            }
        }
        if (plyr1[1]=='e'&& plyr2[1]=='a')
            cout << "Jogador 1 venceu\n";

        if (plyr1[1]=='a' && plyr2[1]=='e')
            cout << "Jogador 2 venceu\n";

        if (plyr1[1]=='a' && plyr2[1]=='a')
            cout << "Ambos venceram\n";

        if (plyr1[1]=='e' && plyr2[1]=='e')
            cout << "Sem ganhador\n";

        if (plyr1[1]=='t' && plyr2[1]=='t')
            cout << "Aniquilacao mutua\n";
    }
    return 0;
}

