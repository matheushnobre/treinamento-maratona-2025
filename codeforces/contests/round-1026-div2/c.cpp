#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), ans(n);
    stack<int> pilha;
    for(int i=0; i<n; i++) cin>>a[i];
    
    vector<pair<int, int>> e(n);
    int temp=0;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        e[i] = {x, y};

        if(a[i] == -1) {
            pilha.push(i);
            ans[i] = 0;
        }
        else {
            temp += a[i];
            ans[i] = a[i];
        }
        
        while(temp < x && !pilha.empty()){
            int aux = pilha.top();
            pilha.pop();
            temp++;
            ans[aux] = 1;
        }
    }

    temp = 0;
    for(int i=0; i<n; i++){
        temp += ans[i];
        if(temp < e[i].first || temp > e[i].second){
            cout<<-1<<endl;
            return;
        }
    }

    for(int i : ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}