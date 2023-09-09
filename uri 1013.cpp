#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a, b, c, d, s;

   //input 3 integer values
   cin>>a>>b>>c;

   //calculating the greatest
   // of those three values
   d=(a+b+abs(a-b))/2;

   s=(d+c+abs(d-c))/2;

   //displaying
   cout<<s<<" eh o maior"<<endl;

   return 0;
}


