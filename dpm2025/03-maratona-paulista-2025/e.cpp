#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, d;
    cin>>n>>d;
    vector<pair<ll, ll>> a(n);
    vector<ll> p(n), s(n);

    for(int i=0; i<n; i++)
        cin>>a[i].first>>a[i].second;

    sort(a.begin(), a.end());

    ll ans=0;
    ll i=n-1, j=n-1, satual=0, smax=0;

    // Sufixo
    while(j>=0){
        satual += a[j].second;

        while(abs(a[j].first - a[i].first) > d){
            satual -= a[i].second;
            i--;
        }

        if(satual > smax){
            smax = satual;
        }

        s[j] = max(s[j], smax);
        j--;
    }

  //  for(int i=0; i<n; i++){
      //  cout<<"i = "<<i<<", suffix = "<<s[i]<<endl;
   // }

    // calculo dos prefixos
    i=0, j=0, satual=0, smax=0;
    while(j<n){
        satual += a[j].second;

        while(a[j].first - a[i].first > d){
            satual -= a[i].second;
            i++;
        }

        if(satual > smax){
            smax = satual;
        }

        p[j] = max(p[j], smax);
        j++;
    }
    
    for(int i=0; i<n-1; i++){
        ans = max(ans, p[i] + s[i+1]);
    }

    ans = max(ans, p[n-1]);

   // for(int i=0; i<n; i++){
   //     cout<<"i = "<<i<<", preffix = "<<p[i]<<endl;
   // }

    cout<<ans<<endl;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}