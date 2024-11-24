#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    double n;
    cin>>n;
    double intermediario = (n+1)/2;
    ll soma = intermediario * n;
    n = (int) n;
    
    if(soma % 2 == 1){
        cout<<"NO"<<endl;
        return 0;
    }

    soma = soma / 2;
    vector<ll> valores;
    vector<ll> v1;
    for(int i=n; i>0; i--) valores.push_back(i);

    ll newSum = 0;
    int i=0;
    while(newSum < soma){
        ll faltam = soma - newSum;
        if(faltam >= valores[i]){
            newSum += valores[i];
            v1.push_back(valores[i]);
            i++;
        } else{
            while(valores[i] != faltam) i++;
        }
    }

    if(v1.size() == 0){
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(int i=v1.size()-1; i>=0; i--)
        cout<<v1[i]<<" ";
    cout<<endl;
    cout<<n-v1.size()<<endl;

    int j=1;
    for(int i=v1.size()-1; i>=0; i--){
        while(j < v1[i]){
            cout<<j<<" ";
            j++;
        } j++;
    } cout<<endl;

    return 0;
}