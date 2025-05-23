#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int i=0, j=n-1, alice=0, bob=0, total=0, temp=0, ant=0;
    while(i <= j){
        if(total % 2 == 0){
            temp += a[i];
            i++;
        } else{
            temp += a[j];
            j--;
        }

        if(temp > ant){
            if(total % 2 == 0) alice += temp;
            else bob += temp;
            ant = temp;
            temp = 0;
            total++;
        }
    }

    if(temp != 0){
        if(total % 2 == 0) alice += temp;
        else bob += temp;
        ant = temp;
        temp = 0;
        total++;
    }

    cout<<total<<" "<<alice<<" "<<bob<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}