#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int m1=0, m2=0, qtd1=0, qm1=0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            if(a[i] > b[i]) m1 += a[i];
            else m2 += b[i];
        } else{
            if(a[i] == 1) qtd1++;
            else if(a[i] == -1) qm1++;
        }
    }

    for(int i=0; i<qm1; i++){
        if(m1 > m2) m1--;
        else m2--;
    }

    for(int i=0; i<qtd1; i++){
        if(m1 < m2) m1++;
        else m2++;
    }

    cout<<min(m1, m2)<<endl;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}