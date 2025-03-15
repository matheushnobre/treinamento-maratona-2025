#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010
const ll INF = 1000000000000;
ll v[MAX], answer[MAX];
bool resolvido[MAX];
int n, k;

ll solve(int i){
    if(i >= n) return INF;
    if(resolvido[i]) return answer[i];

    ll ans = INF;
    for(int j=1; j<=k; j++)
        ans = min(ans, solve(i+j) + abs(v[i+j] - v[i]));
    
    resolvido[i] = true;
    answer[i] = ans;
    return answer[i];
}

int main(){
    cin>>n>>k;
    resolvido[n-1] = true;
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<solve(0)<<endl;
    return 0;
}