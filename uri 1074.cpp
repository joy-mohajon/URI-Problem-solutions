#include<stdio.h>

int main()
{
    int n,i,s;
    cin>>n;

    for (i=0; i<n; i++)
    {
        cin>>s;

        // displaying which catagorize
        //deserve this value

        if (s>0 && s%2==0)
            cout<<"EVEN POSITIVE\n";
        else if (s<0 && s%2==0)
            cout<<"EVEN NEGATIVE\n";
        else if (s<0 && s%2!=0)
            cout<<"ODD NEGATIVE\n";
        else if (s>0 && s%2!=0)
            cout<<"ODD POSITIVE\n";
        else
            cout<<"NULL\n";
    }
    return 0;
}


