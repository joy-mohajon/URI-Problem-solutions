#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s3;
    int s1=0, s2=1, cnt=2;

    cin >> n;

    // displaying sequence

    if (n==1)
        cout << 0 << endl;

    else if(n==2)
        cout << 0 << 1 << endl;

    else
    {
        cout << 0 << " " << 1;

        while(cnt!=n)
        {
            s3 = s1 + s2;
            cout << " " << s3;
            s1 = s2;
            s2 = s3;
            cnt++;
        }
        cout << endl;
    }

    return 0;
}
