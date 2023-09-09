#include<bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    cin>>n;

    /* calculating and displaaying taxes
     according to the following table */

    cout<<fixed;
    if (n>=0.00 && n<=2000.00)
        //for without taxes
        cout<<"Isento\n";
    else if (n>2000.00 && n<=3000.00)
    {
        //for 8 %
        n=n-2000.00;
        n=(n*8)/100;
        cout<<"R$ "<<setprecision(2)<<n<<endl;
    }
    else if (n>3000.00 && n<=4500.00)
    {
        //for 18 %
        n = n-3000;
        n = (n*18)/100;
        cout<<"R$ "<<setprecision(2)<<n+80<<endl;
    }
    else if (n>4500.00)
    {
        //for 28 %
        n=n-4500.00;
        n=(n*28)/100;
        cout<<"R$ "<<setprecision(2)<<n+80+270<<endl;
    }

    return 0;
}


