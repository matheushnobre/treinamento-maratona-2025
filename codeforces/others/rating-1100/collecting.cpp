#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n;
    ll a;

    cin>>t;
    while (t--){
        cin>>n;
        vector<pair<ll, int>> vetor;
        vector<ll> somas(n);
        vector<int> respostas(n);

        for(int i=0; i<n; i++){
            cin>>a;
            vetor.push_back({a, i});
        }

        sort(vetor.begin(), vetor.end());

        int inicio=0, fim=inicio;
        for(int i=0; i<n; i++){
            if(i==0) somas[i] = vetor[i].first;
            else somas[i] = somas[i-1] + vetor[i].first;

            if(i==n-1 || somas[i] < vetor[i+1].first){
                fim=i;
                while(fim>=inicio){
                    respostas[vetor[fim].second] = i;
                    fim--;
                }
                inicio=i+1;
            }
        }

        for(int i=0; i<n; i++){
            cout<<respostas[i]<<" ";
        } cout<<endl;
    }
    

    return 0;
}