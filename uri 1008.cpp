#include<bits/stdc++.h>

using namespace std;

int main()
{
   int NUMBER;
   double A, B, SALARY;

   //input 1 integer and 2 floating number
   cin >> NUMBER >> A >> B;

   //calculating the amount of the salary per worked hour.
   SALARY = A * B;

   //displaying employee's number, amount of the salary
   cout<<fixed;
   cout << "NUMBER = " << NUMBER << endl;
   cout << setprecision(2) << "SALARY = U$ " << SALARY << endl;

   return 0;
}

