#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    int menor=1, maior=n;
    for(int i=0; i<n; i++) cin>>p[i];

    int l=0, r=n-1;
    while(l < r){
        if(p[l] == menor){
            menor++;
            l++;
        } else if(p[r] == menor){
            menor++;
            r--;
        } else if(p[l] == maior){
            maior--;
            l++;
        } else if(p[r] == maior){
            maior--;
            r--;
        } else{
            cout<<l+1<<" "<<r+1<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}