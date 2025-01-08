#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n>>s;

    for(int ps=1; ps<n; ps++){
        if(n % ps == 0){
            int qtd = 0;
            int i=0;
            for(i=0; i<n; i++){
                if(s[i % ps] != s[i]){
                    qtd++;
                    if(qtd>1) break;
                }
            }

            if(i==n){
                cout<<ps<<endl;
                return 0;
            } 
            else if(i-1 <= 3*ps){
                qtd = 0;
                int j=0;
                for(j=0; j<n; j++){
                    if(s[j % ps + ps] != s[j]){
                        qtd++;
                        if(qtd>1) break;
                    }
                }
                if(j==n){
                    cout<<ps<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<n<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

