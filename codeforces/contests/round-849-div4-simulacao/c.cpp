#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s;
    cin>>n>>s;
    int i=0, j=n-1;

    while(i < j){
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
            i++;
            j--;
        } else{
            break;
        }
    }

    cout<<n-2*i<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}