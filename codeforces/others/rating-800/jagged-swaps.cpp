#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t, n;
    int array[10];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>array[i];
        if(array[0] == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
