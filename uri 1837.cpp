#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, q, a1, i;

    // input two integer
    cin >> a >> b;

    // if b is negative than
    //b has to be make positive
    int k = b * b;
    k =  sqrt(k);

    /* finding q and r(i) for 0 to b
     when inputed a is equal to
     calculating a1 for the values
     of i than print out q and r */
    for (i=0; i<k; i++)
    {
        // finding q and a1 by question's law
        q = (a - i) / b;
        a1 = (b * q) + i;

        // if equal than print out and exit
        if (a==a1)
        {
            cout << q << " " << i << endl;
            break;
        }
    }

    return 0;
}

