#include<bits/stdc++.h>

using namespace std;

int main()
{
    // the range of unsigned long long is
    //0 to 18,446,744,073,709,551,615
    unsigned long long int n;

    while(cin >> n)
    {
        if (n==-1)
            break;

        if (n==0)
            cout << "0" << endl;
        else
            cout << n-1 << endl;
    }
    return 0;
}
