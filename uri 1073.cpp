#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i;
    cin>>n;

    // this is loop for 1 to n
    for (i=1; i<=n; i++)
    {
        // check out is it even
        if(i%2==0)
        {
            m = i * i;
            // displaying multiply of even number
            cout << i << "^2 = " << m << endl;
        }
    }
    return 0;
}


