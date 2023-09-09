#include<stdio.h>

int main()
{
    int p, j1, j2, r, a, s;

    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

    /* this decision depend on some conditions
    which are the choice of player 1 that means
    p and the choice of player 1 and player 2
    that means j1 and j2 next one is their
    cheating that carry r and a variable  */

    if (p==1)
    {
        s = j1 + j2;

        if (s%2!=0)
        {
            if (r==1 && a==1)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if (r==0 && a==0)
            {
                printf("Jogador 2 ganha!\n");
            }
            else
                printf("Jogador 1 ganha!\n");
        }
        else
        {
            if (r==1 && a==1)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if (r==0 && a==0)
            {
                printf("Jogador 1 ganha!\n");
            }
            else
                printf("Jogador 1 ganha!\n");
        }
    }
    else if (p==0)
    {
        s = j1 + j2;

        if (s%2==0)
        {
            if (r==1 && a==1)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if (r==0 && a==0)
            {
                printf("Jogador 2 ganha!\n");
            }
            else
                printf("Jogador 1 ganha!\n");
        }
        else
        {
            if (r==1 && a==1)
            {
                printf("Jogador 2 ganha!\n");
            }
            else if (r==0 && a==0)
            {
                printf("Jogador 1 ganha!\n");
            }
            else
                printf("Jogador 1 ganha!\n");
        }
    }
    return 0;

}


