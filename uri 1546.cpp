#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k;

    // test case
    cin >> n;

    for(i=0; i<n; i++)
    {
        //  the number of feedbacks
        cin >> k;

        int arr[k];
        // input some integer
        for(j=0; j<k; j++)
        {
            cin >> arr[j];
        }

        // displaying name according to the question
        for(j=0; j<k; j++)
        {
            if(arr[j]==1)
            {
                cout << "Rolien" << endl;
            }
            else if (arr[j]==2)
            {
                cout << "Naej" << endl;
            }
            else if (arr[j]==3)
            {
                cout << "Elehcim" << endl;
            }
            else if (arr[j]==4)
            {
                cout << "Odranoel" << endl;
            }
        }

    }

    return 0;
}

