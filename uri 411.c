#include<stdio.h>
int main()
{
    int i, j, z=11;
    char c;
    double d[12][12], s=0.0;

    scanf("%c",&c);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf",&d[i][j]);
        }
    }

    for (i=0; i<5; i++)
    {
        j=i+1;
        for (j=j; j<z; j++)
        {
            s+=d[j][i];
        }
        z--;
    }

    if (c=='S')
        printf("%.1lf\n",s);
    else if (c=='M')
        printf("%.1lf\n",s/2);

    return 0;
}

