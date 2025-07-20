#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int, pair<int, int>>> indices;

int main(){
    int n;
    cin>>n;

    if(n == 1) {
        cout<<1<<endl;
        return 0;
    }

    vector<int> lista(n);
    lista[0] = 1;
    lista[n-1] = 2;

    int tam = ((n-2)/2 - (n%2==0));
    indices.push({tam, {-1, n-2}});

    for(int aux=3; aux<=n; aux++){
        pair<int, pair<int, int>> at = indices.top();
        indices.pop();

        at.second.first = -at.second.first;
        
        //cout<<"at.first = "<<at.first<<endl;
       // cout<<"at.second.first = "<<at.second.first<<", .second = "<<at.second.second;
      //  cout<<endl<<endl;
        int metade = (at.second.first + at.second.second) / 2;
        lista[metade] = aux;
        pair<int, int> l1 = {-at.second.first, metade-1};
        pair<int, int> l2 = {-(metade+1), at.second.second};

        int tamL1 = metade-1 - at.second.first + 1;
        int tamL2 = at.second.second - (metade+1) + 1;

        indices.push({tamL1/2 - (tamL1 % 2 == 0), l1});
        indices.push({tamL2/2 - (tamL2 % 2 == 0), l2});
        //cout<<metade<<endl;
        //cout<<at.first<<endl;
    }

    for(int i : lista) cout<<i<<" ";

    return 0;
}