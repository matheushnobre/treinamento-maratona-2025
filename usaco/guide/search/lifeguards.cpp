#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int aux[1010] = {0};
    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        v[i] = {a, b};
        for(int j=a; j<b; j++) aux[j]++;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=v[i].first; j<v[i].second; j++) aux[j]--;
        int temp=0;
        for(int i=0; i<=1000; i++) temp += (aux[i]>0);
        ans = max(ans, temp);
        for(int j=v[i].first; j<v[i].second; j++) aux[j]++;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    solve();
    return 0;
}