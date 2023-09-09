#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[3], b[3], i;
    double s1, s2, s3, s4, s5, s6;
    char ch[100];

    s1=s2=s3=s4=s5=s6=0;

    // the number of players
    cin >> n;

    while(n--)
    {
        //the name of player
        cin >> ch;

        /*  the numbers represent the
         service, blocks and attack
          attempts for two time */

        // should be the track of the number
        // of services, blocks and attacks
        for (i=0; i<3; i++)
        {
            cin >> a[i];
        }
        //these services, blocks and
        // attacks that were successful.
        for (i=0; i<3; i++)
        {
            cin >> b[i];
        }
        // calculating sum of services, blocks and
        // attacks for every players and for two time
        s1+=a[0];
        s2+=a[1];
        s3+=a[2];
        s4+=b[0];
        s5+=b[1];
        s6+=b[2];
    }
    // displaying and calculating percentage of all players
    cout << fixed;
    cout << "Pontos de Saque: " << setprecision(2) << (s4 * 100) / s1 << " %." << endl;
    cout << "Pontos de Bloqueio: " << setprecision(2) << (s5 * 100) / s2 << " %." << endl;
    cout << "Pontos de Ataque: " << setprecision(2) << (s6 * 100) / s3 <<  " %." << endl;

    return 0;
}
