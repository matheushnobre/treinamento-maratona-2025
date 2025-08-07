#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll l, c;
    ll total = 0;
    cin>>l>>c;
    vector<ll> a(l*c);

    for(ll i=0; i<l*c; i++){
        cin>>a[i];
        total += a[i];
    }

    if(total % (l*c) == 0){
        ll n = total/(l*c);
        ll ans = 0;
        for(ll i=0; i<l*c; i++)
            ans += 10 * abs(n-a[i]);

        ans/=2;
        cout<<ans<<" "<<1<<endl;
    }
    else{
        sort(a.begin(), a.end());
        ll n1 = total/(l*c);
        ll n2 = n1+1;

        ll ans =  1e18;
        for(ll x=1; x<(l*c); x++){
            if(((l*c)-x) * n2 + x*n1 == total){
                ll y = (l*c) - x;
                ll a1=0;
                //cout<<x<<" "<<y<<endl;
                for(int i=0; i<x; i++){
                    //cout<<"i = "<<i<<", somando = "<<abs(n1-a[i]);cout<<endl;
                    a1 += 10 * abs(n1-a[i]);
                }
                for(int i=x; i<l*c; i++){
                    a1 += 10 * abs(n2-a[i]);
                  //  cout<<a[i]<<endl;
                   // cout<<"i = "<<i<<", somando = "<<abs(n1-a[i]);cout<<endl;
                }
               // cout<<a1/2<<endl;
                ans = a1/2;
                cout<<ans<<" "<<2<<endl;
                return 0;
            }
        }
        
    }

    return 0;
}