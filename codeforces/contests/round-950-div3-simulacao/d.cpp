#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

int mdc(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

bool poss(int p, vector<int>& a, int n){
    stack<int> aux;

    for(int i=0; i<n-1; i++){
        if(i != p){
            int m;

            if(i+1 != p) 
                m = mdc(a[i], a[i+1]);
            else{
                if(i == n-2) return true;
                m = mdc(a[i], a[i+2]);
            }

            if((i==0) || (p==0&&i==1)) aux.push(m);
            else if(m >= aux.top()) aux.push(m);
            else{
                return false;
            }
        }
    }

    return true;
}

void solve(){
    int n, p1=-1, p2=-1, p3=-1;
    cin>>n;
    vector<int> a(n);
    stack<int> b;
    for(int i=0; i<n; i++) cin>>a[i];

    bool c=false;
    for(int i=0; i<n-1; i++){
        int m = mdc(a[i], a[i+1]);
        if(i==0) b.push(m);
        else if(m >= b.top()) b.push(m);
        else{
            if(!c){
                p1=i, p2=i-1, p3=i+1;
                break;
            }
        }
    }

    if(poss(p1, a, n) || poss(p2, a, n) || poss(p3, a, n)) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}