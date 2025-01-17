#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, v;
    cin>>n;
    map<int, int> a;
    for(int i=0; i<n; i++){
        cin>>v;
        a[v]++;
    }

    int ant=-1, ans=0, atual=0;
    for(auto x : a){
        if(x.first == ant+1){
            if(x.second < atual) 
                ans += atual - x.second;
            atual = x.second;
        } else{
            ans += atual;
            atual = x.second;
        }
        ant = x.first;
    }
    ans += atual;
    cout<<ans<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}