#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef set<pair<ll, ll>> sii;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    ll t, a, b, xk, yk, xq, yq;
    cin>>t;
    while(t--){
        cin>>a>>b>>xk>>yk>>xq>>yq;
        sii aking, aqueen;

        ll dx[8] = {a, a, a*(-1), a*(-1), b, b, b*(-1), b*(-1)};
        ll dy[8] = {b, b*(-1), b, b*(-1), a, a*(-1), a, a*(-1)};
        for(int i=0; i<8; i++){
            aking.insert({xk+dx[i], yk+dy[i]});
            aqueen.insert({xq+dx[i], yq+dy[i]});
        }

        sii answer; 
        set_intersection(aking.begin(), aking.end(), aqueen.begin(), aqueen.end(), inserter(answer, answer.begin()));
        cout<<answer.size()<<endl;
    }

    return 0;
}