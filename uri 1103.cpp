#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2, r[4], k, i;
    while(1)
    {
        cin >> h1 >> m1 >> h2 >> m2;

        if(h1==0 && m1==0 && h2==0 && m2==0) break;

        /*  r[0]=h1;r[1]=m1;r[2]=h2;r[3]=m2;

            for( i=0;i<4;i+=2){
                if (r[i]==0){r[i]=24;}
                    h1=r[0];h2=r[2];
            }
           if(h1==h2){
                if (m1==m2){k=24*60;printf("%d\n",k);}
                else if (m1>m2){k=(24*60)-(m1-m2);printf("%d\n",k);}
                else if (m1<m2){k=(m2-m1);printf("%d\n",k);}
            }
            else if(h1<h2){
                if (m1==m2){k=(h2-h1)*60;printf("%d\n",k);}
                else if (m1>m2){k=((h2-h1)*60)-(m1-m2);printf("%d\n",k);}
                else if (m1<m2){k=((h2-h1)*60)+(m2-m1);printf("%d\n",k);}
            }
            else if(h1>h2){
                if (m1==m2){k=(24-(h1-h2))*60;printf("%d\n",k);}
                else if (m1>m2){k=((24-(h1-h2))*60)-(m1-m2);printf("%d\n",k);}
                else if (m1<m2){k=((24-(h1-h2))*60)+(m2-m1);printf("%d\n",k);}
            }
        }  */

        int k1, k2;

        //converting hour to minutes
        k1=(h1*60)+m1;
        k2=(h2*60)+m2;

        // calculating and displaying number of minutes
        // 60 * 24 = 1440

        if (k1 > k2)
            cout << 1440 - (k1 - k2) << endl;
        else
            cout << (k2 - k1) << endl;
    }
    return 0;
}
