#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x,d;
    cin>>x;

    /* calculating percentage of actual salary
    according to the table and displaying total
    salary, increasing salary and percentage */

    cout<<fixed;
    if (0<x && x<=400.00)
    {
        d=x*15/100;
        cout<<"Novo salario: "<<setprecision(2)<<d+x<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 15 %\n";
    }
    else if (400.01<=x && x<=800.00)
    {
        d=x*12/100;
        cout<<"Novo salario: "<<setprecision(2)<<d+x<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 12 %\n";
    }
    else if (800.01<=x && x<=1200.00)
    {
        d=x*10/100;
        cout<<"Novo salario: "<<setprecision(2)<<d+x<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 10 %\n";
    }
    else if (1200.01<=x && x<=2000.00)
    {
        d=x*7/100;
        cout<<"Novo salario: "<<setprecision(2)<<d+x<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 7 %\n";
    }
    else if (x>2000.00)
    {
        d=x*4/100;
        cout<<"Novo salario: "<<setprecision(2)<<d+x<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 4 %\n";
    }

    return 0;
}

