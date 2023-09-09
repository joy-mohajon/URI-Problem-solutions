#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    while(cin >> a >> b >> c)
    {
        int cnt1=0, cnt2=0;

        // here finding quantity of
        // 1 or 0 for every test case
        if(a==1)
            cnt1++;
        else
            cnt2++;

        if(b==1)
            cnt1++;
        else
            cnt2++;

        if(c==1)
            cnt1++;
        else
            cnt2++;

        //printing A, B, C depend on input
        // value and quantity of 1 and 0
        if (cnt1==1)
        {
            if(a==1)
                cout << "A" << endl;

            else if (b==1)
                cout << "B" << endl;

            else if (c==1)
                cout << "C" << endl;
        }

        else if (cnt2==1)
        {
            if(a==0)
                cout << "A" << endl;

            else if (b==0)
                cout << "B" << endl;

            else if (c==0)
                cout << "C" << endl;
        }
        else
            printf("*\n");

    }

    return 0;
}




