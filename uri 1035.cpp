#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;

    //input 4 integer value
    cin >> a >> b >> c >> d;

    /* when condition is true then displaying
    “Valores aceitos” otherwise displaying
    “Valores nao aceitos” */

    if (b > c && d > a && c + d > a + b && (c, d > 0) && a % 2 == 0)
       cout << "Valores aceitos\n";
    else
       cout << "Valores nao aceitos" << endl;

    return 0;
}

