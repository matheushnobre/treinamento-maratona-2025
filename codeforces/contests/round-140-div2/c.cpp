#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<pair<pair<int, int>, int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first.first>>a[i].first.second;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());
    vector<int> ans;
    int l=-1, r=-1;

    int i=0;
    while(i < n){
        int j=i;
        while(j < n && a[j].first.first == a[i].first.first) j++;
        j--;

        if(a[j].first.second > r){
            r = a[j].first.second;
            ans.push_back(a[j].second);
        }

        i = j+1;
    }

    cout<<ans.size()<<endl;
    sort(ans.begin(), ans.end());
    for(int i : ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}