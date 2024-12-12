#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m, answer=0;
    cin>>n>>m;

    char manchas[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>manchas[i][j];

    char simples[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>simples[i][j];

    for(int j=0; j<m; j++){
        set<char> c1, c2, c3;
        for(int i=0; i<n; i++) c1.insert(simples[i][j]);
        for(int i=0; i<n; i++) c2.insert(manchas[i][j]);

        set_union(c1.begin(), c1.end(), c2.begin(), c2.end(),  inserter(c3, c3.begin()));
        if(c3.size() == c1.size() + c2.size()) answer++;
    }

    cout<<answer<<endl;
    return 0;
}