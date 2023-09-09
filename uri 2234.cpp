#include<bits/stdc++.h>

using namespace std;

int main()
{
   double m, p;

    //the total number of consumed hot dogs
    // and the total number of participants
    cin >> m >> p;

    //the average hot dogs consumed
    // by the participants
    cout << fixed;
    cout << setprecision(2) << m/p << endl;

   return 0;
}

