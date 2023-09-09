#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s=0, i;

    //input value
    for (i=0; i<4; i++)
    {
        cin >> n;
        // calculating sum of
        //the all inputed values
        s += n;
    }

    //subtract 3 from the sum
    s = s - 3;

    // displaying the maximum number
    cout << s << endl;

    return 0;
}

