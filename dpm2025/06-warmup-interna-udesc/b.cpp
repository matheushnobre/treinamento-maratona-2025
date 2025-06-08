#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin>>n>>x;
    vector<pair<int, int>> a(n);

    for(int i=0; i<n; i++) cin>>a[i].first;
    for(int i=0; i<n; i++) cin>>a[i].second;

    bool l=false;
    int r=0, t=0;
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){

        if(a[i].second == 1 && l==false){
            l=true;
            if(a[i].first + t <= x){
                r++;
                t+=a[i].first;
            }
        } else if(a[i].second == 0){
            if(a[i].first + t <= x){
                r++;
                t+=a[i].first;
            }
        }
    }

    cout<<r<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}