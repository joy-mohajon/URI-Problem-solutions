#include<bits/stdc++.h>

using namespace std;

int main()
{

    float s=0, i=1, d, j;

    // calculating sum of sequence
    for (j=1; j<=39; j+=2)
    {
        d=j/i;
        s=s+d;
        i=i+i;
    }

    cout << fixed;
    cout << setprecision(2) << s << endl;

    return 0;
}


