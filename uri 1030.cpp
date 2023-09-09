#include<bits/stdc++.h>
#include <vector>

using namespace std;

int connect(int d, int n)
{
    while(d>=n){
        d=d%n;
    }
    return d;
}
int main()
{
    int t, n, k, j=1;
    vector <int> v;

    cin >> t;

    while(t--){
        cin >> n >> k;

        //storing 1-n number by vector
        for(int i=1; i<=n; i++){
            v.push_back(i);
        }

        // k'th number will be erase
        //it will be terminated when
        //size of the vector will be one
        for(int i=k-1; v.size()!=1; i+=k){

            if(i>=v.size()){
                // "connect" function use for establishing a circle
                //it return erasable number
                i = connect(i, v.size());
                v.erase(v.begin()+i);
                i--; //for this erasing the size of the vector decreasing by 1.
            }
            else{
                v.erase(v.begin()+i);
                i--;
            }
        }
        cout << "Case " << j++ << ":" << " " << v[0] << endl;
        v.clear();

    }
    return 0;
}
