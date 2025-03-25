#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    string s;
    cin>>n>>s;

    ll soma=0;
    vector<ll> m;
    for(int i=0; i<n; i++){
        int aux=0;
        if(s[i] == 'L') {
            soma += i;
            aux = max(0LL, (n-i-1) - i);
        }
        else {
            soma += n-i-1;
            aux = max(0LL, i - (n-i-1));
        }
        m.push_back(aux);
    }
   
    sort(m.rbegin(), m.rend());
    for(int k=0; k<n; k++){
        soma += m[k];
        cout<<soma<<" ";
    } cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}