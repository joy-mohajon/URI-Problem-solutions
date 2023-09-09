#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum=0, cnt=0;
    char ch[10];

    // input a string
    while(cin >> ch)
    {
        // exit point.
        if (strcmp(ch, "ABEND")==0)
            break;

        // the amount of tourists
        cin >> n;

        // "SALIDA" means the tourist
        // are entering the park
        if (strcmp(ch, "SALIDA")==0)
        {
            sum += n;
            cnt++;
        }
        // "VUELTA" means the tourist
        //are returning from the ride
        else if (strcmp(ch, "VUELTA")==0)
        {
            sum -= n;
            cnt--;
        }
    }
    // the amount of tourists and the
    //amount of jeeps that still need
    //to return from the park.
    cout << sum << endl << cnt << endl;

    return 0;
}

