#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, mg, amount;
    string str;

    // test case
    while(cin >> n)
    {
        int i, sum=0;

        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            // the amount of food
            cin >> amount;

            scanf("%*c");
            // name of the food
            getline(cin, str);

            // calculating total milligram
            // of vitamins for each food
            if(str[0]=='s')
            {
                mg = 120 * amount;
            }
            else if((str[5]=='g') || (str[2]=='m'))
            {
                mg = 85 * amount;
            }
            else if(str[0]=='g')
            {
                mg = 70 * amount;
            }
            else if(str[2]=='n')
            {
                mg = 56 * amount;
            }
            else if(str[0]=='l')
            {
                mg = 50 * amount;
            }
            else if(str[2]=='o')
            {
                mg = 34 * amount;
            }
            // calculating the sum of
            // all measure of vitamins
            sum += mg;
        }

        // considering and displaying about
        // recommended vitamin(110-130)
        if(sum>130)
        {
            // displaying how much more
            //than the recommended vitamin
            cout << "Menos " << sum-130 << " mg" << endl;
        }
        else if(sum<110)
        {
            // displaying how much less
            //than the recommended vitamin
            cout << "Mais " << 110-sum << " mg" << endl;
        }
        else
        {
            // between recommended vitamin
            cout << sum <<" mg" << endl;
        }
    }

    return 0;
}

