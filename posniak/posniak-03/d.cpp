#include <bits/stdc++.h>
using namespace std;

#define INF 10000000

void solve(){
    string s;
    cin>>s;
    int qtd[3] = {0, 0, 0};
    int i=0, j=0, n=s.size(), menor=INF;;
    
    while(i<n){
        while(j<n){
            if(qtd[0]>0 && qtd[1]>0 && qtd[2]>0){
                menor = min(menor, j-i);
                break;
            }

            qtd[s[j]-'0'-1]++;
            j++;
        }

        if(qtd[0]>0 && qtd[1]>0 && qtd[2]>0){
            menor = min(menor, j-i);
        }

        qtd[s[i]-'0'-1]--;
        i++;
    }
    if(menor != INF) cout<<menor<<endl;
    else cout<<0<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}