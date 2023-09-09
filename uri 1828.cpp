#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, d=0;

    char c1[8], c2[8];

    cin >> n;

    // displaying decision according to the question
    for (i=1; i<=n; i++)
    {
        // input two word
        cin >> c1 >> c2;

        //strcmp() function use to find
        //whether two string are same

        if (strcmp(c1,c2)==0)
            cout << "Caso #" << i << ": De novo!\n";

        else if (strcmp(c1,"tesoura")==0)
        {
            if (strcmp(c2,"papel")==0 || strcmp(c2,"lagarto")==0)
                cout << "Caso #" << i << ": Bazinga!\n";
            else if (strcmp(c2,"Spock")==0 || strcmp(c2,"pedra")==0)
                cout << "Caso #" << i << ": Raj trapaceou!\n";
        }
        else if (strcmp(c1,"papel")==0)
        {
            if (strcmp(c2,"pedra")==0 || strcmp(c2,"Spock")==0)
                cout << "Caso #" << i << ": Bazinga!\n";

            else if (strcmp(c2,"tesoura")==0 || strcmp(c2,"lagarto")==0)
                cout << "Caso #" << i << ": Raj trapaceou!\n";
        }
        else if (strcmp(c1,"pedra")==0)
        {
            if (strcmp(c2,"lagarto")==0 || strcmp(c2,"tesoura")==0)
                cout << "Caso #" << i << ": Bazinga!\n";

            else if (strcmp(c2,"papel")==0 || strcmp(c2,"Spock")==0)
                cout << "Caso #" << i << ": Raj trapaceou!\n";
        }
        else if (strcmp(c1,"lagarto")==0)
        {
            if (strcmp(c2,"Spock")==0 || strcmp(c2,"papel")==0)
                cout << "Caso #" << i << ": Bazinga!\n";
            else if (strcmp(c2,"pedra")==0 || strcmp(c2,"tesoura")==0)
                cout << "Caso #" << i << ": Raj trapaceou!\n";
        }
        else if (strcmp(c1,"Spock")==0)
        {
            if (strcmp(c2,"tesoura")==0 || strcmp(c2,"pedra")==0)
                cout << "Caso #" << i << ": Bazinga!\n";
            else if (strcmp(c2,"papel")==0 || strcmp(c2,"lagarto")==0)
                cout << "Caso #" << i << ": Raj trapaceou!\n";
        }
    }

    return 0;
}
