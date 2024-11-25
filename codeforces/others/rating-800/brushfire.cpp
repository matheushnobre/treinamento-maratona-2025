#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;

    int l=0;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]) l++;
    }

    if(l<=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}