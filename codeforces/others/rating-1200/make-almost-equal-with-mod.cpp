#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 1000000000000000000

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n;
    ll vetor[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>vetor[i];

        for(ll v=2; v<=MAX; v*=2){
            ll restos[2] = {-1, -1};
            bool saida=true;
            for(int i=0; i<n; i++){
                if(restos[0] == -1) restos[0] = vetor[i] % v;
                else if(vetor[i] % v == restos[0] || vetor[i] % v == restos[1]) continue;
                else if(vetor[i] % v != restos[0] && restos[1] == -1) restos[1] = vetor[i] % v;
                else{
                    saida=false;
                    break;
                }
            }
            if(saida && restos[1] != -1) {
                cout<<v<<endl;
                break;
            }
        }
    }

    return 0;
}