#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[15], b[15], c[15];

    // input 3 string

    cin >> a >> b >> c;

    /* find out and displaying animal
    name according to the diagram of
    the question by three words */

    if (a[0]=='v'){
        if (b[0]=='a'){
            if (c[0]=='c')
                cout << "aguia\n";
            else
                cout << "pomba\n";
        }
        else {
            if (c[0] == 'o')
                cout << "homem\n";
            else
                cout << "vaca\n";
        }
    }
    else {
        if (b[0]=='i'){
            if (c[2]=='m')
                cout << "pulga\n";
            else
                cout << "lagarta\n";
            }
        else {
            if (c[0]=='h')
                cout << "sanguessuga\n";
            else
                cout << "minhoca\n";
        }
    }

    return 0;
}
