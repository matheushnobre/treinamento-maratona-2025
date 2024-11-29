#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t, n, k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;

        int ocorrencias[26] = {0};
        for(char c : s)
            ocorrencias[c-'a']++;
        
        int op=0, oi=0;
        for(int i=0; i<26; i++){
            if(ocorrencias[i] % 2 == 0) op++;
            else oi++; 
        }

        if(n-k % 2 == 0){
            if(oi <= k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } else{
            if(oi <= k+1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}