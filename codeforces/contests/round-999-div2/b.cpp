#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

int solve(){
    int n, v;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    sort(a.begin(), a.end());
    int c = -1;
    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            c = a[i];
            a.erase(a.begin()+i);
            a.erase(a.begin()+i);
            break;
        }
    }

    if(c == -1) { cout<<-1<<endl; return 0;}

    for(int i=0; i<n-3; i++){
        if(a[i+1] - a[i] < 2*c){
            cout<<c<<" "<<c<<" "<<a[i+1]<<" "<<a[i]<<endl;
            return 0;
        } 
    }
    

    cout<<-1<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}