#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;

    while(cin >> n)
    {
        int arr[n], temp[n], flag=0;
        char ch[n][20];

        // input a string and expiration date
        for(i=0; i<n; i++)
        {
            cin >> ch[i] >> arr[i];
            temp[i] = arr[i];
        }

        // sorting the array
        //values(expiration dates)
        //by ascending order
        sort(arr, arr+n);

        // displaying a sequence of string depend
        // on sorting array(expiration dates)
        for(i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (arr[i] == temp[j])
                {
                    if (flag==0)
                    {
                        // for first string
                        // without a space
                        cout << ch[j];
                        flag = 1;
                    }
                    else
                    {
                        cout << " " << ch[j];
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}


