#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010
const ll mod = 998244353;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> aux(MAX), freq(MAX);

    int n;
    cin>>n;
    vector<int> a(n), pref(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int ans = 0;
    for(int j=0; j<n; j++){
        int i = a[j];
        ans = (ans + freq[i]) % mod;
        ans = (ans + aux[i]) % mod;

        freq[i]++;
        
        if(j != 0) aux[i] = (aux[i] + pref[j-1]) % mod;
        pref[j] = ans;
    }
    cout<<(ans+1) % mod<<endl;

    return 0;
}