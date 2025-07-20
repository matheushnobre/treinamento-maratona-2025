#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, ans=1;
    cin>>n;
    vector<int> a(n);
    map<int, int> p;

    for(int i=0; i<n; i++) cin>>a[i];
    p[a[0]] = 1;

    int temp=0;
    for(int i=1; i<n; i++){
        if(p[a[i]] == ans){
            p[a[i]]++;
            temp++;
        } else if(p[a[i]] == 0){
            p[a[i]] = ans+1;
            temp++;
        }

        //cout<<p.size()<<" "<<temp<<" "<<ans<<endl;

        if(temp == p.size()) {
            ans++;
            temp = 0;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}