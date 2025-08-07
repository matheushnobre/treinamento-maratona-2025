#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;
    map<int, int> jang;

    for(int i=0; i<n; i++){
        int x, r, m;
        cin>>x>>r>>m;

        for(int j=0; j<=r; j++){
            jang[x+j] = max(jang[x+j], static_cast<int>(m + sqrt(pow(r, 2) - pow(j, 2))));
            jang[x-j] = max(jang[x-j], static_cast<int>(m + sqrt(pow(r, 2) - pow(j, 2))));
        }

    }

    int ans = 0;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        if(jang[x] > 0 && jang[x] >= y) {
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}