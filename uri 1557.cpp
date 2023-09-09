#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j, m, n;

    while(cin >> N)
    {
        // Exit point
        if(N==0)
            break;

        int a, N_space, H_space, arr[N][N];

        /* calculating and creating
        arrays with their values*/
        for(i=0,m=1; i<N; i++,m=m*2)
        {
            for(j=0,n=m; j<N; j++,n=n*2)
            {
                arr[i][j] = n;
            }
        }
        /* here finding highest space which
        contains arr[N-1][N-1] for every
        test case. For extra space
        added 1 with highest space */
        // converting integer to string
        string str1 = to_string(arr[N-1][N-1]);
        H_space = (str1.size() + 1);

        /* In the below displaying arrays */
        for(i=0,m=1; i<N; i++,m=m*2)
        {
            for(j=0,n=m; j<N; j++,n=n*2)
            {
                // finding length of every integer and
                //deducting from highest space
                string str2 = to_string(arr[i][j]);
                N_space = H_space - str2.size();

                if(j==0)
                {
                    // displaying space
                    for(a=0; a<N_space-1; a++)
                        cout << " ";

                    // displaying integer
                    cout << arr[i][j];
                }
                else
                {
                    for(a=0; a<N_space; a++)
                        cout << " ";

                    cout << arr[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

