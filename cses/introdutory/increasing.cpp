#include <bits/stdc++.h>
using namespace std;

#define MAXN 200010
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    ll vetor[MAXN];
    cin>>n;
    for(int i=0; i<n; i++) cin>>vetor[i];

    ll ans=0;
    for(int i=1; i<n; i++){
        if(vetor[i] < vetor[i-1]){
            ans += vetor[i-1] - vetor[i];
            vetor[i] = vetor[i-1];
        }
    }

    cout<<ans<<endl;


    return 0;
}