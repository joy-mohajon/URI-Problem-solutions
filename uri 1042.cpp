#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin>>a>>b>>c;

    /* determining and displaying
    ascending order */

    if (a<b && a<c)
        cout<<a<<endl;
    else if (b<c)
        cout<<b<<endl;
    else
        cout<<c<<endl;

    if (a>b && a>c){
       if (b<c)
          cout<<c<<endl;
       else
          cout<<b<<endl;
    }
    else if (b>a && b>c){
            if (a<c)
                cout<<c<<endl;
            else
                cout<<a<<endl;
    }
    else if (c>a && c>b){
            if (a<b)
                cout<<b<<endl;
            else
                cout<<a<<endl;
    }

    if (a>b && a>c)
        cout<<a<<endl<<endl;
    else if (b>c)
        cout<<b<<endl<<endl;
    else
        cout<<c<<endl<<endl;

    //displaying readed sequence

    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;

}


