#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, test_case=0;
    char c1, c2;

    while(cin >> n)
    {
        int i=0, j=0;

        /* for every test case print
        out new line except first
        case and then calculation */

        if(test_case>0)
        {
            cout << endl;
        }

        while(1)
        {
            /* here c2 use for space character
            and last newline character */

            /* loop is terminated when
            c2 have newline character */
            scanf("%d %c%c",&a,&c1,&c2);

            // taking decision and
            //counting pairs of shoes
            if(n==a)
            {
                if(c1=='M')
                {
                    i++;
                }
                else if(c1=='F')
                {
                    j++;
                }
            }
            if(c2=='\n')
            {
                break;
            }
            //cout << a << " " << c1 << endl;
        }
        test_case++;

        // displaying statistics of calculation
        cout << "Caso " << test_case << ":" << endl;
        cout << "Pares Iguais: " << i+j << endl;
        cout << "F: " << j << endl;
        cout << "M: " << i << endl;
    }
    return 0;
}

