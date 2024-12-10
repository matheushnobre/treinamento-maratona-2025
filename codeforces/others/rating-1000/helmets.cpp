#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t, n, p, v;
    ll a[MAX];
    vector<pair<ll, ll>> aux;
    ll answer;

    cin>>t;
    while(t--){
        aux.clear();
        cin>>n>>p;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            cin>>v;
            aux.push_back({v, a[i]});
        }
        sort(aux.begin(), aux.end());

        answer = p;
        n -= 1;
        int i = 0;
        while(n > 0){
            ll v = aux[i].first;
            ll qtd = min(aux[i].second, n);

            if(v < p){
                answer += (v * qtd);
                n -= qtd;
            } else{
                answer += (p * n);
                n = 0;
            }
            i += 1;
        }
        cout<<answer<<endl;
    }

    return 0;
}