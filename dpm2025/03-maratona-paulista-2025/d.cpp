#include <bits/stdc++.h>
using namespace std;

int n, m, p, s, ans=0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m>>p>>s;

    vector<vector<int>> np(n);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        np[x-1].push_back(y-1);
        np[y-1].push_back(x-1);
    }

    // criando os grupos de ingredientes
    for(int i=0; i<pow(2, n); i++){
        vector<int> temp(21);
        bool pao = false;
        bool sal = false;
        bool falha = false;

        for(int j=0; j<20; j++){
            if(i & (1<<j)){
                if(j < p){
                    if(pao) falha = true;
                    pao = true;
                } else if(j < p+s){
                    if(sal) falha = true;
                    sal = true;
                }
                temp[j] = 1;
                for(int k : np[j]){
                    if(temp[k]) falha=true;
                }
            }
        }

        if(pao && sal && !falha) ans++;
    }

    cout<<ans<<endl;

    return 0;
}