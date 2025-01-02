#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, answer=2, c=0, d=0;
    cin>>n;
    vector<ll> vetor(n);
    for(int i=0; i<n; i++){
        cin>>vetor[i];
        if(i == 0) continue;
        c += abs(vetor[i] - vetor[i-1]);
        if(d == 0){
            if(vetor[i] > vetor[i-1]) d = 1;
            else if(vetor[i] < vetor[i-1]) d = 2;
        }
        else if(d == 1 && vetor[i] < vetor[i-1]){
            answer++;
            d = 2;
        } else if(d == 2 && vetor[i] > vetor[i-1]){
            answer++;
            d = 1;
        }
    }

    if(c == 0) cout<<1<<endl;
    else cout<<answer<<endl;
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