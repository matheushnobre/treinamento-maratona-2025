#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m, a, b;
    char c;
    ll maior=0;
    cin>>n>>m;
    vector<ll> vetor(n);
    for(int i=0; i<n; i++){
        cin>>vetor[i];
        maior = max(maior, vetor[i]);
    }

    for(int i=0; i<m; i++){
        cin>>c>>a>>b;
        if(c=='+' && maior >= a && maior <= b) maior++;
        else if(c=='-' && maior >= a && maior <= b) maior--;
        cout<<maior<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}