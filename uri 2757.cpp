#include<bits/stdc++.h>

using namespace std;

int main()
{
     int a, b, c;

     // input three integers
     cin >> a >> b >> c;

     // displaying three integer by different way
     cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
     cout << "A = " << setw(10) << a << ", B = "
          << setw(10) << b << ", C = " << setw(10) << c << endl;
     cout << "A = " << setfill('0') << setw(10) << a
          << ", B = " << setfill('0') << setw(10) << b
          << ", C = " << setfill('0') << setw(10) << c << endl;
     printf("A = %-10d, B = %-10d, C = %-10d\n",a,b,c);

     return 0;
}



