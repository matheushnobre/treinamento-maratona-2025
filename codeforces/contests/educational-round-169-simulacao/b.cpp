#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l, r, L, R, answer=0;
    vector<bool> a(110);
    cin>>l>>r>>L>>R;
    if(L < l) {
        swap(l, L);
        swap(r, R);
    } 

    for(int i=l; i<=r; i++) a[i] = 1;
    for(int i=L; i<=R; i++)
        if(a[i-1]) answer++;

    if(r != R && R < r) answer++;

    cout<<max(1, answer)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}