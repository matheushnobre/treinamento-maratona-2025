#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s;
    cin>>n>>s;

    int o1[26] = {0}, o2[26] = {0};
    int t1=0, t2=0, ans=0;
    for(char c : s){
        o1[c-'a']++;
        if(o1[c-'a']==1)t1++;
    }
    ans=t1;
    for(char c : s){
        o1[c-'a']--;
        o2[c-'a']++;
        if(o1[c-'a']==0)t1--;
        if(o2[c-'a']==1)t2++;
        ans=max(ans, t1+t2);
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}