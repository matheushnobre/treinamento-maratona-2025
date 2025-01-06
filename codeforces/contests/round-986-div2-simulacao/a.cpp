#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b, x=0, y=0;
    string s;
    bool saida=false;
    map<char, pair<int, int>> mapa = {{'N', {0, 1}}, {'E', {1, 0}}, {'S', {0, -1}}, {'W', {-1, 0}}};
    cin>>n>>a>>b;
    cin>>s;

    for(int i=0; i<1000; i++){
        for(int i=0; i<n; i++){
            x += mapa[s[i]].first;
            y += mapa[s[i]].second;

            if(x == a && y == b) {
                saida=true;
                break;
            }
        }
    }
    

    if(saida) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}