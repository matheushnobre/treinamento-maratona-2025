#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1e9

void solve(){
    int n, menor=INF, smenor=INF, maior=-INF, smaior=-INF;
    ll soma=0, answer=0;
    cin>>n;
    vector<int> v1(n), v2(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
        soma += v1[i];

        if(v1[i] > maior){
            smaior = maior;
            maior = v1[i];
        } else if(v1[i] > smaior){
            smaior = v1[i];
        }

        if(v1[i] < menor){
            smenor = menor;
            menor = v1[i];
        } else if(v1[i] < smenor){
            smenor = v1[i];
        }
    }

    
    for(int i=0; i<n; i++){
        cin>>v2[i];
        ll somaTemp = soma + v2[i] - v1[i];
        if(v1[i] == menor) somaTemp -= min(v2[i], smenor);
        else somaTemp -= min(v2[i], menor);
        if(v1[i] == maior) somaTemp -= max(v2[i], smaior);
        else somaTemp -= max(v2[i], maior);
        answer = max(answer, somaTemp);
    }

    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}