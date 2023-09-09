#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, max;

    cin >> a >> b;

    // finding which one is
    //max between of a and b
    max = (a >= b)?a:b;

    // displaying ...
    printf("%d\n",max);

    return 0;
}

