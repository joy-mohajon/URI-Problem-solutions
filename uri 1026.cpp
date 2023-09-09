#include<bits/stdc++.h>

using namespace std;

int main()
{
   int unsigned long  a, b, c;

   /* adding 2 integers by converting them
   in binary number but here doesn't metter
   carry bit that means 1 + 1 = only 0
   is not 0 and carry 1. In that case it(^)
   can be used. */

   while(cin >> a >> b){

     c = (a ^ b);

     //displaying adding number
     cout << c << endl;
   }
    return 0;
}
