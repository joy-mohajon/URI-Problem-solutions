#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
    int i, x;

    for (i=0;i<5;i++){
        cin>>x;

        //calculating quantity of even, add,
        // positive and negetive numbers

        if (x%2==0 || x==0)
            cnt1++;

        if (x%2!=0)
            cnt2++;

        if (x>0)
            cnt3++;

        if (x<0)
            cnt4++;
    }

    // displaying quantity of every format

    cout<<cnt1<<" valor(es) par(es)\n";
    cout<<cnt2<<" valor(es) impar(es)\n";
    cout<<cnt3<<" valor(es) positivo(s)\n";
    cout<<cnt4<<" valor(es) negativo(s)\n";

    return 0;
}


