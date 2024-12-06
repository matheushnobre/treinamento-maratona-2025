#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n;
    string a, b;
    cin>>n>>a>>b;

    int sub = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]) sub++;
        else{
            if(sub != 0) ans++;
            sub = 0;
        }
    }

    cout<<ans<<endl;

    return 0;
}