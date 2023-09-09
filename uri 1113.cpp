#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i;
    while(1)
    {
        cin >> x >> y;

        /* find out and displaying
        “Crescente” if the values of X
        less than Y otherwise “Decrescente”. */

        // if x is equal to y then
        //the input will finished

        if(x>y)
            cout << "Decrescente\n" ;
        else if(x<y)
            cout << "Crescente\n" ;
        else if(x==y)
            break;
    }
    return 0;

}


