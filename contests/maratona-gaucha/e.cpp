#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector<vector<ll>> mat(n+2, vector<ll>(n+2));
    vector<vector<ll>> pref(n+2, vector<ll>(n+2));
    vector<vector<ll>> suf(n+2, vector<ll>(n+2));
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>mat[i][j];
            pref[i][j] = pref[i][j-1] + mat[i][j];
        }
    }

   // for(int i=0; i<=n; i++){
   //     for(int j=0; j<=n; j++){
   //         cout<<pref[i][j]<<" ";
   //     } cout<<endl;
   // }

    for(int i=1; i<=n; i++){
        for(int j=n; j>0; j--){
            suf[i][j] = suf[i][j+1] + (-1)*mat[i][j];
        }
    }

 //   for(int j=0; j<=n; j++){
 //       cout<<suf[2][j]<<endl;
 //   }

    vector<ll> cand(n+2, -INF);
    vector<ll> ans(n+2);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ll aux = (pref[i][j-1] * (n-j)) + suf[i][j+1];
      //      cout<<"candidato "<<i<<", p = "<<j<<endl;
      //      cout<<"pref = "<<pref[i][j-1]<<", n-j = "<<n-j<<", suf = "<<suf[i][j+1]<<endl;
        //    cout<<"aux = "<<aux<<endl<<endl;

            if(aux > cand[i]){
                cand[i] = aux;
                ans[i] = j;
            }
        }
    }

    ll maior=0, venc=1;
    for(int i=1; i<=n; i++){
        if(cand[i] > maior){
            maior = cand[i];
            venc = i;
        }
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<venc<<" "<<maior<<endl;
    return 0;
}