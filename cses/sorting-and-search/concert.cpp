#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    multiset<int> ms;
    int n, m, v;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>v;
        ms.insert(-v);
    }

    for(int i=0; i<m; i++){
        cin>>v;
        auto it = ms.lower_bound(-v);

        if(it != ms.end()){
            int t = - *it;
            cout<<t<<endl;
            ms.erase(ms.find(-t));  // pra remover somente uma ocorrência daquela chave
        } 
        
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}