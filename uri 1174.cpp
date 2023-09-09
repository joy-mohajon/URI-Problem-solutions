#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;

    float a[100];

    for (i=0; i<100; i++)
    {
        cin >> a[i];

        // displaying array elements
       // which are less than equal 10

        if  (a[i]<=10)
            cout << "A[" << i << "] = " << a[i] << endl;
    }

    return 0;
}

