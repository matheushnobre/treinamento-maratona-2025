#include <bits/stdc++.h>
using namespace std;

#define MAXN 200000
#define ll long long int

vector<vector<ll>> e; 
ll saida[MAXN] = {0};

ll solve(ll n){
    queue<int> ql;
    ql.push(1);
    ll r = 0, mr = 0;
    sort(e.begin(), e.end());
    for(ll i=0; i<2*n; i++){
        if(e[i][1] == 1){
            r++;
            if(ql.empty()){
                ql.push(r);
            }
            saida[e[i][2]] = ql.front();
            ql.pop();
            mr = max(r, mr);
        } else{
            r--;
            ql.push(saida[e[i][2]]);
        }
    }
    return mr;
}

int main(){
    ll n, a, b;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a>>b;
        e.push_back({a, 1, i});
        e.push_back({b, 2, i});
    }
    cout<<solve(n)<<endl;
    for(ll i=0; i<n; i++){
        cout<<saida[i]<<" ";
    } cout<<endl;

    return 0;
}