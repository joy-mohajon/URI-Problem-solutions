#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i;
    long long int fib[60];

    fib[0]=0;

    fib[1]=1;

    // find out Fibonacci series
    for (i=2; i<61; i++)
        fib[i] = fib[i-1] + fib[i-2];

    cin >> n;

    // displaying N-th term
    // of the Fibonacci series
    for (i=0; i<n; i++)
    {
        cin >> x;

        cout << "Fib(" << x << ") = " << fib[x] << endl;
    }
    return 0;
}

