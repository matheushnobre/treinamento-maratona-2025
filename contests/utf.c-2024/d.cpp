#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, v1, v2, s=0;
    cin>>n;
    vector<int> pessoas;
    for(int i=0; i<n; i++){
        cin>>v1>>v2;
        pessoas.push_back(v1);
        pessoas.push_back(v2);
    }
    sort(pessoas.begin(), pessoas.end());
    for(int i=1; i<2*n; i+=2){
        s = max(s, pessoas[i] - pessoas[i-1]);
    }
    cout<<s<<endl;
    return 0;
}