#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j=0, n;

    cin >> n;

    for (i=0; i<1000; i++)
    {
        //if statement used for
        // repeat the values after n times
        if (j==n)
        {
            j=0;
        }
        // displaying array values
        //and their location
        cout << "N[" << i << "] = " << j << endl;

        j++;
    }

    return 0;
}


