#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<pair<int, int>> saida;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j] > a[j+1]){
                saida.push_back({1, j+1});
                swap(a[j], a[j+1]);
            }

            if(b[j] > b[j+1]){
                saida.push_back({2, j+1});
                swap(b[j], b[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] > b[i]){
            swap(a[i], b[i]);
            saida.push_back({3, i+1});
        }
    }

    cout<<saida.size()<<endl;
    for(pair<int, int> p : saida){
        cout<<p.first<<" "<<p.second<<endl;
    }

  //  for(int i=0; i<n; i++) cout<<a[i]<<" ";
    //cout<<endl;
    //for(int i=0; i<n; i++) cout<<b[i]<<" ";
    //cout<<endl<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}