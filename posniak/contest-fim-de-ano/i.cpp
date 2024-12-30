#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    ll total=0, people=0;
    cin>>n;
    vector<ll> vetor(n);
    for(int i=0; i<n; i++) cin>>vetor[i];
    sort(vetor.begin(), vetor.end());
    for(int i=0; i<n; i++){
        if(vetor[i] > total){
            total += vetor[i];
            people++;
        }
    }
    cout<<people<<" "<<total<<endl;
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