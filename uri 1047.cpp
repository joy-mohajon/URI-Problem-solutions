#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1,m1,h2,m2;
    int m,h;

    cin>>h1>>m1>>h2>>m2;

    /* calculating and displaying
     the duration of the game */

    if (h1>h2 && m1>m2)
    {
        m=(60+m2)-m1;
        h=(24+h2)-(h1+1);
        cout<<"O JOGO DUROU "<<h
            <<" HORA(S) E "<<m<<" MINUTO(S)\n";
    }
    else if (h1<h2 && m1<m2)
    {
        h=h2-h1;
        m=m2-m1;
        cout<<"O JOGO DUROU "<<h
            <<" HORA(S) E "<<m<<" MINUTO(S)\n";
    }
    else if (h1>h2 && m1<=m2)
    {
        m=m2-m1;
        h=(24+h2)-h1;
        cout<<"O JOGO DUROU "<<h
            <<" HORA(S) E "<<m<<" MINUTO(S)\n";
    }
    else if (h1<h2 && m1>m2)
    {
        m=(60+m2)-m1;
        h=h2-(h1+1);
        cout<<"O JOGO DUROU "<<h
            <<" HORA(S) E "<<m<<" MINUTO(S)\n";
    }
    else if (h1==h2 && m1>m2)
    {
        m=(60+m2)-m1;
        cout<<"O JOGO DUROU 23 HORA(S) E "<<m<<" MINUTO(S)\n";
    }
    else if (h1==h2 && m1<m2)
    {
        h=h2-h1;
        m=m2-m1;
        cout<<"O JOGO DUROU "<<h
            <<" HORA(S) E "<<m<<" MINUTO(S)\n";
    }

    else if (h1<h2 && m1==m2)
    {
        h=h2-h1;
        m=m2-m1;
        cout<<"O JOGO DUROU "<<h
            <<" HORA(S) E "<<m<<" MINUTO(S)\n";
    }
    else
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";

    return 0;
}


