#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t, n, x, ai;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int last=0;
        int maximo=0;
        for(int i=0; i<n; i++){
            cin>>ai;
            maximo = max(maximo, ai-last);
            last = ai;
        }
        maximo = max(maximo, (x-last)*2);
        cout<<maximo<<endl;
    }

    return 0;
}