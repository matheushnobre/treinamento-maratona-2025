#include <bits/stdc++.h> 
using namespace std;

int mdc(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve(){
    int n;
    cin>>n;
    vector<int> p(n), s(n), aux(n);
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) aux[i] = max(p[i], s[i]);

    for(int i=1; i<n; i++){
        if(p[i] > p[i-1] || s[i] < s[i-1]){
            cout<<"NO"<<endl;
            return;
        }   
    }

   // for(int i=0; i<n; i++) cout<<aux[i]<<" ";
    //cout<<endl;

    int cima = p[0];
    for(int i=1; i<n; i++){
        cima = mdc(cima, aux[i]);
       // cout<<cima<<endl;
        if(cima != p[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    int baixo = s[n-1];
    for(int i=n-2; i>=0; i--){
        baixo = mdc(baixo, aux[i]);
        if(baixo != s[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}