#include<bits/stdc++.h>

using namespace std;

int main()
{
   float a, b, c, s, m;

   cin >> a >> b >> c;

   // calculating the perimeter of the triangle
   s = (a + b + c);

   // calculating the area of the trapezium
   m = ((a + b) * c) / 2;

   /* determining, is it posible to make triangle
   if possible then displaying perimeter of triangle
    otherwise displaying area of the trapezium */

   cout << fixed;
   if (a < (b + c) && b < (a + c) && c < (a + b))
      cout << "Perimetro = " << setprecision(1) << s << endl;
   else
      cout << "Area = " << setprecision(1) << m << endl;

   return 0;
}


