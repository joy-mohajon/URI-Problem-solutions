#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, x, y, count=0;

    //the number of total stickers
    // and the number of stickers
    //already purchased of the album
    cin >> x >> y;

    int arr[y], cnt[x+5]={0};

    // sticker's number which are already bought
    for (i=0; i<y; i++)
    {
        cin >> arr[i];
    }

    // counting the number of each
    //sticker which are already bought
    for (i=0; i<y; i++)
    {
        cnt[arr[i]]++;
    }

    // counting the number of stickers which are present
    for(i=1; i<=x; i++)
    {
        if (cnt[i]>0)
        {
            count++;
        }
    }

    // displaying the number of missing stickers
    cout << x-count << endl;

    return 0;
}

