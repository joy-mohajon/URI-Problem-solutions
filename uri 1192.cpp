#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int i=0, n, a, b;

    cin >> n;

    while(i<n)
    {
        // input 2 integers and 1 character
        scanf("%d %c %d",&a, &c, &b);

        // displaying result according to question
        if (c<97)
        {
            if(a==b)
            {
                cout << a*b << endl;
            }
            else
            {
                cout << b-a << endl;

            }
        }
        else
        {
            if(a==b)
            {
                cout << a*b << endl;
            }
            else
            {
               cout << a+b << endl;
            }
        }
        i++;
    }

    return 0;
}

