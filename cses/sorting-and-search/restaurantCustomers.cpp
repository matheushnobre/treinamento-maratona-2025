// Sweep Line

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> aux;

    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        aux.push_back({a, 1});
        aux.push_back({b, -1});
    }

    sort(aux.begin(), aux.end());
    int temp=0, ans=0;

    for(auto i : aux){
        temp += i.second;
        ans = max(ans, temp);
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}