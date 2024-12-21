// Upsolving

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y;
    cin>>n>>x>>y;
    vector<int> saida(n);
    for(int i=0; i<n; i++)
        saida[i] = i+1;
    
    for(int i=0; i<n; i++){
        int a, b, c=1000;
        if(i==0){
            a = saida[i+1];
            b = saida[n-1];
        }
        else if(i==n-1){
            a = saida[i-1];
            b = saida[0];
        }
        else{
            a = saida[i-1];
            b = saida[i+1];
        }

        if(i == x-1) c = saida[y-1];
        else if(i == y-1) c = saida[x-1];
    
        for(int m=0; m<=2; m++){
            if(m == a || m == b || m == c) continue;
            else{
                saida[i] = m;
                break; 
            }
        }
    }

    for(int v : saida) cout<<v<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}