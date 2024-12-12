#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m;
    ll a;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<ll>> arrays(n);
        for(int i=0; i<n; i++){
            cin>>m;
            for(int j=0; j<m; j++){
                cin>>a;
                arrays[i].push_back(a);
            }
            sort(arrays[i].begin(), arrays[i].end());
        }
    
        if(n==1) cout<<arrays[0][0]<<endl;
        else{
            ll segundoMenor = arrays[0][1], menor = arrays[0][0];
            int index=0;

            for(int i=1; i<n; i++){
                if(arrays[i][1] < segundoMenor){
                    segundoMenor = arrays[i][1];
                    index = i;
                }

                if(arrays[i][0] < menor) menor = arrays[i][0];
            }

            ll answer=menor;
            for(int i=0; i<n; i++){
                if(i!=index) answer+=arrays[i][1];
            }
            cout<<answer<<endl;
        }

    }


    return 0;
}