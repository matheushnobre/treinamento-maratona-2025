#include <bits/stdc++.h>
using namespace std;

#define MAXN 2010

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k, v;
    int vetor[MAXN];
    vector<set<int>> poss;

    cin>>k>>n;
    for(int i=0; i<k; i++) cin>>vetor[i];

    for(int i=0; i<n; i++){
        cin>>v;
        int sum=0;
        set<int> p;
        for(int j=0; j<k; j++){
            sum += vetor[j];
            p.insert(v-sum);
        }
        poss.push_back(p);
    }

    set<int> ans = poss[0];
    for(int i=1; i<n; i++){
        set<int> aux;
        set_intersection(ans.begin(), ans.end(), poss[i].begin(), poss[i].end(), inserter(aux, aux.begin()));
        ans = move(aux);
    } 

    cout<<ans.size()<<endl;

    return 0;
}