#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    vector<int> usados(n);
    int i=0, j=n-1, ans=0;

    while(i < j){
        while(j > i && a[i] + a[j] > x) j--;
        if(j > i){
            ans++;
            usados[i] = 1;
            usados[j] = 1;
            i++;
            j--;
        }
    }

    for(int i=0; i<n; i++)
        if(!usados[i]) 
            ans++;

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}