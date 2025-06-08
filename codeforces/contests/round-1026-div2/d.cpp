#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
const int INF = 1e9+10;

bool check(int m, vector<int>& bat, vector<vector<pii>>& grafo, vector<int>& minOut){
    vector<int> aux(grafo.size());
    aux[1] = bat[1];

    for(int i=1; i<grafo.size(); i++){
        for(pii v : grafo[i]){
            int vz = v.first;
            int peso = v.second;
            
            if(peso > m || peso > aux[i]) continue;
            int novoPeso = min(static_cast<ll>(INF), static_cast<ll>(aux[i]) + static_cast<ll>(bat[vz]));
            aux[vz] = max(aux[vz], novoPeso);
        }
    }

   return aux[grafo.size()-1] > 0;
}

void solve(){
    int n, m;
    cin>>n>>m;

    vector<int> bat(n+1), minOut(n+1, INF);
    for(int i=1; i<=n; i++) cin>>bat[i];

    vector<vector<pii>> grafo(n+1);
    for(int i=0; i<m; i++){
        int s, t, w;
        cin>>s>>t>>w;
        grafo[s].push_back({t, w});
        minOut[s] = min(minOut[s], w);
    }

    minOut[n] = 0;

    int ans = -1;
    ll l=0, r=INF;
    while(l <= r){
        ll mid = (l+r)/2;
        if(check(mid, bat, grafo, minOut)){
            ans = mid;
            r = mid-1;
        } else{
            l = mid+1;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}