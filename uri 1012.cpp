#include<bits/stdc++.h>
#define pi 3.14159

using namespace std;

int main()
{
   float a, b, c;
   double T, C, Tr, S, R;

   //input 3 floating value
   cin>>a>>b>>c;

   //calculating
   //area of the rectangled triangle
   T = .5 * a * c;
   //area of the radius's circle
   C = pi * c * c;
   //area of the trapezium
   Tr = ((a+b)/2) * c;
   //area of â€‹â€‹the square
   S = b * b;
   //area of the rectangle
   R = a * b;

   //displaying areas
   cout<<fixed;
   cout<<setprecision(3)<<"TRIANGULO: "<<T<<endl
                        <<"CIRCULO: "<<C<<endl
                        <<"TRAPEZIO: "<<Tr<<endl
                        <<"QUADRADO: "<<S<<endl
                        <<"RETANGULO: "<<R<<endl;

   return 0;
}
