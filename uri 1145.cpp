#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, x, y, cnt=0;

    cin >> x >> y;

    // displaying sequence
    cout << "1";

    // counting number per line
    cnt++;

    for (i=2; i<=y; i++)
    {
        // displaying
        cout << " " << i;

        cnt++;

        // if count is equal to x
        //then print new line
        if (cnt==x)
        {
            cout << endl;

            // exit point
            if (i==y)
                break;
            else
            {
                // for new line
                cnt=0;
                i++;
                cout << i;
                cnt++;
            }
        }
    }

    return 0;
}

