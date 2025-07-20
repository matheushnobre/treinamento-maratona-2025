#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;

    map<char, int> freq;
    for(int i=0; i<n-1; i++){
        freq[s[i]]++;
        if(freq[s[i]] > 1){
            cout<<"Yes"<<endl;
            return;
        }
    }

    map<char, int> freq2;
    for(int i=1; i<n; i++){
        freq2[s[i]]++;
        if(freq2[s[i]] > 1){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}