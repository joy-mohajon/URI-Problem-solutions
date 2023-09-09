#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    while(cin >> n)
    {
        double arr[n], min;

        // input some real numbers
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        // find out the min value
        min = *min_element(arr, arr+n);

        // displaying the min value
        printf("%.2lf\n",min);
    }
    return 0;
}
