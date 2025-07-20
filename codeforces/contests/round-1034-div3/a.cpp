#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<int> a(n);

    for(int i=0; i<n; i++){
        if(a[i]) continue;
        for(int j=i+1; j<n; j++){
            if((i+j) % 4 == 3){
                a[i] = 1;
                a[j] = 1;
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(!a[i]){
            cout<<"Alice"<<endl;
            return;
        }
    }

    cout<<"Bob"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}