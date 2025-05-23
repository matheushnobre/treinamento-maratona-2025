#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans=0;
    cin>>n;
    
    vector<int> a(n);
    vector<int> freq(8010), control(8010);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        freq[a[i]]++;
    }

    for(int i=0; i<n; i++){
        int soma=a[i];
        for(int j=i+1; j<n; j++){
            soma += a[j];
            if(soma >= 8010) break;
            if(freq[soma] && control[soma]==0) {
                ans+=freq[soma];
                control[soma]=1;
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}