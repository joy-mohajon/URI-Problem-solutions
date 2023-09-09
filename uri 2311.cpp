#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, l, n;
    double d, max, min;
    char ch[100];

    //the number of divers
    cin >> n;

    while(n--)
    {
        double s = 0, arr[7];
        // competitor's name and degree
        cin >> ch >> d;

        // first score...
        cin >> arr[0];

        max = arr[0];
        min = arr[0];

        // input next scores and
        // find out max score
        for (i=1; i<7; i++)
        {
            cin >> arr[i];

            if (max<arr[i])
            {
                max=arr[i];
            }
        }
        // find out min score
        for (i=1; i<7; i++)
        {
            if (min>arr[i])
            {
                min=arr[i];
            }
        }
        // calculating sum of all scores
        //except max and min score
        for (i=0; i<7; i++)
        {
            if (arr[i]==max || arr[i]==min)
            {
                continue;
            }
            else
                s += arr[i];
        }
        // displaying the final
        // score with their name
        cout << fixed;
        cout << ch << " " << setprecision(2) << s*d << endl;
    }
    return 0;
}

