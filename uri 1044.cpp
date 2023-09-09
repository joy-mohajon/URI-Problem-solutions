#include<bits/stdc++.h>

using namespace std;

int main()
{
     int a, b;

     cin >> a >> b;

     /* if they are multiples then
     displaying "Sao Multiplos"
     otherwise "Nao sao Multiplos" */

     if(b % a == 0 || a % b == 0)

        cout << "Sao Multiplos" << endl;

     else

        cout << "Nao sao Multiplos" << endl;

   return 0;

}

