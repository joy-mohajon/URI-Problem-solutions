#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3], j=1, p, n;
    char st[10];

    // test case
    cin >> n;

    while(n--)
    {
        int i, sum=0;

        cin >> st;

        //input values of the colored image pixel.
        for (i=0; i<3; i++)
        {
            cin >> arr[i];
        }

        // finding max value
        if (st[1]=='a')
        {
            p = arr[0];

            for (i=0; i<3; i++)
            {
                if (p<arr[i])
                {
                    p = arr[i];
                }
            }
        }
        // min value
        else if (st[1]=='i')
        {
            p = arr[0];

            for (i=0; i<3; i++)
            {
                if (p>arr[i])
                {
                    p = arr[i];
                }
            }
        }
        else if (st[1]=='e')
        {
            // average of the values of
            // the colored image pixel.
            for(i=0; i<3; i++)
            {
                sum += arr[i];
            }
            p = sum/3;
        }
        else if (st[1]=='y')
        {
            // find out percentage of the values
            p = ((double)(arr[0]*30)/100) +
                ((double)(arr[1]*59)/100) +
                ((double)(arr[2]*11)/100);
        }

        // displaying final answer with test number
        cout << "Caso #" << j++ << ": " << p << endl;
    }

    return 0;
}

