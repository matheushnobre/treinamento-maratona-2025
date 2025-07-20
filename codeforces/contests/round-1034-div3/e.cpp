#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), minimo(n+2), maximo(n+2);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        minimo[a[i]]++;
    }

    for(int i=0; i<=n; i++)
        maximo[i] = n - i;
    
    for(int i=0; i<=n; i++){
       // cout<<"i = "<<i<<", min = "<<minimo[i]<<", max = "<<maximo[i]<<endl;
    }

    vector<int> p(n+2);
    for(int i=0; i<=n; i++){
        p[minimo[i]]++;
        if(minimo[i] == 0) break;
    }

    if(p[1] == n) p[1]--;

   // cout<<"p[0] = "<<p[0]<<endl;
    for(int i=1; i<=n; i++){
        p[i] = p[i] + p[i-1];
      //  cout<<"i = "<<i<<", p[i]="<<p[i]<<endl;
    }

    vector<int> s(n+2);
    for(int i=0; i<n; i++){
        s[maximo[i]]++;
        if(minimo[i] == 0) break;
    }


    for(int i=1; i<n; i++){
        s[i] = s[i] + s[i-1];
        p[i+1] -= s[i];
    }

    for(int i=0; i<=n; i++){
        //cout<<i<<" "<<p[i]<<endl;
        cout<<p[i]<<" ";
    }

    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}