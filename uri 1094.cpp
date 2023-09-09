#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, s, x=0, y=0, z=0;
    char c;
    float x1, y1, z1;

    //input test case
    cin>>n;

    for (int i=0; i<n; i++)
    {
        //input amount and animal category
        cin>>a>>c;

        //counting quantity of different types
        // of animals used in each experiment.
        if (a<=15 && a>=1)
        {
            if (c=='C')
                x=x+a;
            else if (c=='R')
                y=y+a;
            else if (c=='S')
                z=z+a;
        }
    }

    // total amount of animals
    //used in laboratory
    s=x+y+z;

    // calculating percentage of every
    //animals used in laboratory
    x1=(double)(100*x)/s;
    y1=(double)(100*y)/s;
    z1=(double)(100*z)/s;

    //displaying
    cout<<fixed;
    cout<<"Total: "<<s<<" cobaias\n";
    cout<<"Total de coelhos: "<<x<<endl;
    cout<<"Total de ratos: "<<y<<endl;
    cout<<"Total de sapos: "<<z<<endl;
    cout<<"Percentual de coelhos: "<<setprecision(2)<<x1<<" %"<<endl;
    cout<<"Percentual de ratos: "<<setprecision(2)<<y1<<" %"<<endl;
    cout<<"Percentual de sapos: "<<setprecision(2)<<z1<<" %"<<endl;

    return 0;
}


