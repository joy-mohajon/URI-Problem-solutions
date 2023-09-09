#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    float s, n;

    /* input product code &
    quantity of products */

    cin>>x>>y;

    /* according to the table
    find out the prize of the
    product by product code */

    if (x == 1)
      n = 4.00;

    else if (x == 2)
      n = 4.50;

    else if (x == 3)
      n = 5.00;

    else if (x == 4)
      n = 2.00;

    else if(x == 5)
      n = 1.50;

    /* calculating the prize
    of quantity of products */

    s = n * y;

    //displaying total prize
    cout<<fixed;
    cout<<"Total: R$ "<<setprecision(2)<<s<<endl;

    return 0;
}



