#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], s=0, i;

    //the number of meals available
    //for chicken, beef and pasta
    for (i=0; i<3; i++)
    {
        cin >> a[i];
    }
    // the number of meals requested
    //for chicken, beef and pasta.
    for (i=0; i<3; i++)
    {
        cin >> b[i];
    }
    // calculating the number
    //of passengers who will
    //not receive meals
    for(i=0; i<3; i++)
    {
        if (b[i]>a[i])
        {
            s+=(b[i]-a[i]);
        }
    }
    cout << s << endl;

    return 0;
}

