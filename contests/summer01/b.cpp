#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, v;
    cin>>n;
    map<int, int> freq;
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>v;
        freq[v]++;
        ans = max(ans, freq[v]);
    }
    cout<<ans<<endl;
}