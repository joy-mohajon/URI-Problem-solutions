#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    // input a integer
    cin >> n;

    int arr[n], i;

    arr[0] = 1;
    arr[1] = 1;

    // creating the sequence
    for(i=0; i<n; i++)
    {
        arr[i+2] = arr[i] + arr[i+1];
    }

    // displaying the sequence
    //bu descending order
    cout << arr[n-1];
    for(i=n-2; i>=0; i--)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
