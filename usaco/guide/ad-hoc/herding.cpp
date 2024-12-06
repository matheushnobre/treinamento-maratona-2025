#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    vector<ll> v(3);
    for(int i=0; i<3; i++) cin>>v[i];
    sort(v.begin(), v.end());

    if(v[1] - v[0] == 1 && v[2] - v[1] == 1){
        cout<<0<<endl<<0<<endl;
        return 0;
    }
    else if(v[1] - v[0] == 2 || v[2] - v[1] == 2){
        cout<<1<<endl;
    } else{
        cout<<2<<endl;
    }

    cout<<max(v[1] - v[0], v[2] - v[1]) - 1<<endl;

    return 0;
}