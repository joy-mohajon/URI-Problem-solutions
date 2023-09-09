#include<stdio.h>

int main()
{
    int h, d, s;

    while (cin >> h)
    {
        scanf(":%d",&x);

        /* displaying a massage
         according to the question */

         // here calculate maximum delay in time
        if (h==7)
            cout << "Atraso maximo: " << x << endl;
        else if (h==8)
        {
            s = 60 + x;
            cout << "Atraso maximo: " << s << endl;
        }
        else if (h==9)
            cout << "Atraso maximo: 120" << endl;
        else
            cout << "Atraso maximo: 0" << endl;
    }
    return 0;
}


