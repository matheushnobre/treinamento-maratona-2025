#include <bits/stdc++.h>
using namespace std;

#define INF 1e7

void solve(){
    int answer=INF;
    int n, a;
    cin>>n;
    while(n--){
        cin>>a;
        answer = min(answer, abs(a - 0));
    }
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}