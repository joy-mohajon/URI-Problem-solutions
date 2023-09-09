#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5], temp, i;

    for(i=1; i<=4; i++)
    {
        cin >> arr[i];

        // storing the position
        //where the beans
        if(arr[i] == 1)
            temp = i;
    }
    // displaying the position
    cout << temp << endl;

    return 0;
}

