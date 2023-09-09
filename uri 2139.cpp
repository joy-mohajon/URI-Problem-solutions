#include<bits/stdc++.h>

using namespace std;

int main()
{
    int mnth, day, x, i;
    //all months of 2016 years except decenber
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    while(cin >> mnth >> day)
    {
        /* displaying massage for this conditions
        when month is 12 but day is greater than
        25 and equal to 25 and also day is 24  */

        if (mnth==12 && day==25)
        {
            cout << "E natal!" << endl;
        }
        else if (mnth==12 && day>25)
        {
            cout << "Ja passou!" << endl;
        }
        else if (mnth==12 && day==24)
        {
            cout << "E vespera de natal!" << endl;
        }
        else
        {
            /* here calculating days when month is not 12 */

            x = months[mnth - 1] - day;

            // calculating days between mnth and November
            for (i=mnth; i<11; i++)
            {
                x += months[i];
            }
            // then added extra 25 days of December month
            x += 25;

            cout << "Faltam " << x << " dias para o natal!" << endl;
        }
    }
    return 0;
}

