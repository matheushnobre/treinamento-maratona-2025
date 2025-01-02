#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    ll k, a, v;
    vector<pair<ll, int>> vetor;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(a <= k) v = a;
        else {
            v = a % k;
            if(v == 0) v += k;
        }
        vetor.push_back({v, i});
    }

    // Ordenação com Lambda
    sort(vetor.begin(), vetor.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; 
        }
        return a.first > b.first;
    });

    for(int i=0; i<n; i++)
        cout<<vetor[i].second<<" ";
    cout<<endl;
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