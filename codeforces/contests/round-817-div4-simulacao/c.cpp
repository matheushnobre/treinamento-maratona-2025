#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    string s;
    cin>>n;
    map<string, int> freq;

    vector<vector<string>> v(3, vector<string>(n));
    vector<int> ans(3);

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            cin>>s;
            freq[s]++;
            v[i][j] = s;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            int aux = freq[v[i][j]];
            if(aux == 1) ans[i] += 3;
            else if(aux == 2) ans[i] += 1;
        }
    }

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