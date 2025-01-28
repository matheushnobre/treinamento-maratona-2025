#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    string a, b;
    cin>>a>>b;

    int n=a.size(), m=b.size();
    int maior=0;

    for(int i=0; i<m; i++){
        int iaux=i, jaux=0, temp=0;
        while(iaux < m && jaux < n){
            if(a[jaux] == b[iaux]){
                temp++; iaux++; jaux++;
            } else jaux++;
        }
        maior=max(maior, temp);
    }

    cout<<n+m-maior<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}