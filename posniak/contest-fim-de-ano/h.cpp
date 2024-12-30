#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    ll a, b, aant=0, bant=0, answer=1;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(min(a, b) >= max(aant, bant)){
            answer += (min(a, b) - max(aant, bant));
            if(aant != bant) answer++;
        }
        aant = a;
        bant = b;
    }
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}