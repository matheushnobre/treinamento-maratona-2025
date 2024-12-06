#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);

    int n, m, k, vaca, p;
    vector<pair<int, int>> hierarquias;
    int p1 = -1;
    
    cin>>n>>m>>k;
    for(int i=0; i<m; i++){
        cin>>vaca;
        if(vaca == 1) p1 = i;
        hierarquias.push_back({vaca, -1});
    }

    vector<int> ordem(n);
    for(int i=0; i<k; i++){
        cin>>vaca>>p;
        if(vaca == 1){
            cout<<p<<endl;
            return 0;
        }
        p--;
        for(int j=0; j<m; j++){
            if(hierarquias[j].first == vaca){
                hierarquias[j] = {vaca, p};
            }
        }
        ordem[p] = vaca;
    }

    if(p1==-1){
        int j=n-1;
        for(int i=m-1; i>=0; i--){
            int vaca = hierarquias[i].first, posicao = hierarquias[i].second;
            if(posicao == -1){
                while(ordem[j] != 0){
                    j--;
                }
                ordem[j] = vaca;
            } else{
                j = posicao;
            }
        }

        for(int i=0; i<n; i++){
            if(ordem[i] == 0){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else{
        int start = 0;
        int aux = 0;
        for(int i=0; i<m; i++){
            aux++;
            if(hierarquias[i].first == 1) break;
            else if(hierarquias[i].second != -1){
                start = hierarquias[i].second;
                p1 = p1-aux;
                aux = 0;
            }
        }
        for(int i=start; i<n; i++){
            if(ordem[i] == 0){
                if(p1==0){
                    cout<<i+1<<endl;
                    return 0;
                }
                p1--;
            }
        }
    }

    return 0;
}