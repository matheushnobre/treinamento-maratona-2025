#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010
const ll INF = 1000000000000;
ll v[MAX], answer[MAX];
bool resolvido[MAX];

ll solve(int i, int n){
    if(i >= n) return INF;
    if(resolvido[i]) return answer[i];

    ll t1 = solve(i+1, n);
    ll t2 = solve(i+2, n);
    if(t1 +  abs(v[i+1] - v[i]) < t2 +  abs(v[i+2] - v[i]))
        answer[i] = t1 + abs(v[i+1] - v[i]);   
    else
        answer[i] = t2 + abs(v[i+2] - v[i]);
    
    resolvido[i] = true;
    return answer[i];
}

int main(){
    int n;
    cin>>n;
    resolvido[n-1] = true;
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<solve(0, n)<<endl;
    return 0;
}