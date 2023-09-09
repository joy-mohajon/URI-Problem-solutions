#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    while(1)
    {
        cin >> n;

        /*displaying "Acesso Permitido"
        if find out password otherwise
            "Senha Invalida" */

        if (n==2002)
        {
            cout << "Acesso Permitido\n";
            break;
        }
        else
            cout << "Senha Invalida\n";
    }
    return 0;

}

