#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<pair<ll, int>> vii;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n;
    ll v, answer;
    cin>>t;
    while(t--){
        vii a, b, c;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>v;
            a.push_back({v, i});
        }

        for(int i=0; i<n; i++){
            cin>>v;
            b.push_back({v, i});
        }

        for(int i=0; i<n; i++){
            cin>>v;
            c.push_back({v, i});
        }

        sort(a.begin(), a.end(), greater<pair<ll, int>>());
        sort(b.begin(), b.end(), greater<pair<ll, int>>());
        sort(c.begin(), c.end(), greater<pair<ll, int>>());

        answer = 0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                for(int k=0; k<3; k++)
                    if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                        answer = max(answer, a[i].first + b[j].first + c[k].first);

        cout<<answer<<endl;
    }


    return 0;
}
