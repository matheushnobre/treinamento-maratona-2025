#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010
typedef long long ll;

int main(){
    int n, q;
    ll m;
    int answer[MAX];
    cin>>n;
    vector<int> shops(n);
    for(int i=0; i<n; i++) cin>>shops[i];
    sort(shops.begin(), shops.end());

    int j=0, valor=0;
    for(int v : shops){
        while(j < v){
            answer[j] = valor;
            j++;
        }
        valor++;
    }
    while(j<MAX){
        answer[j] = valor;
        j++;
    }

    cin>>q;
    while(q--){
        cin>>m;
        if(m >= MAX) cout<<answer[MAX-1]<<endl;
        else cout<<answer[m]<<endl;
    }

    return 0;
}