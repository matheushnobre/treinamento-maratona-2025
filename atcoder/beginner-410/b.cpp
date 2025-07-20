#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin>>n>>q;

    vector<int> boxes(n+1);
    for(int i=0; i<q; i++){
        int c;
        cin>>c;
        if(c != 0) {
            boxes[c]++;
            cout<<c<<" ";
        }
        else{
            int m=1;
            for(int i=1; i<=n; i++){
                if(boxes[i] < boxes[m]) m = i;
            }
            boxes[m]++;
            cout<<m<<" ";
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}