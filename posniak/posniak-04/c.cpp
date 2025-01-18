#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

void solve(){
    int n, p, v;
    map<int, int> conf;
    cin>>n;
    vector<vector<int>> part(n); 

    for(int i=0; i<n; i++){
        cin>>p;
        for(int j=0; j<p; j++){
            cin>>v;
            part[i].push_back(v);
        }
    }

    bool saida=true;
    vector<int> answers(n, 0);
    for(int i=n-1; i>=0; i--){
        for(int p : part[i]){
            if(conf[p]==0) answers[i] = p;
            conf[p] = 1;
        }
        if(answers[i] == 0) saida=false;
    }

    if(saida){
        for(int v : answers) cout<<v<<" ";
        cout<<endl;
    } else{
        cout<<-1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    cin>>t;
    while(t--) solve();
}