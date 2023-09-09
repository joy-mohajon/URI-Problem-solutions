#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, a, b;

    //the width and the length of the room
    cin >> x >> y;

    a = x - 1;

    b = y - 1;

    // displaying the number of
    // tiles of type 1 and type 2
    cout << (x*y)+(a*b) << endl;
    cout << (a*2)+(b*2) << endl;

    return 0;
}

