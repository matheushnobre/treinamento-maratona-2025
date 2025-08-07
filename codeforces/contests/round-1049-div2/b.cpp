#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), aux;
    for(int i=0; i<n; i++) cin>>a[i];

    int i=0, j=n-1;
    string ans="";
    if(a[i] < a[j]) ans += "RL";
    else ans += "LR";
    aux.push_back(max(a[i], a[j]));
    aux.push_back(min(a[i], a[j]));
    i++; j--;

    while(i <= j){
        if(i == j) {
            ans += "L";
            aux.push_back(a[i]);
        } else if(aux[aux.size()-1] > aux[aux.size()-2]){
            if(a[i] > a[j]){
                ans  += "LR";
                aux.push_back(a[i]);
                aux.push_back(a[j]);
            } else{
                ans += "RL";
                aux.push_back(a[j]);
                aux.push_back(a[i]);
            }
        } else{
            if(a[i] < a[j]){
                ans  += "LR";
                aux.push_back(a[i]);
                aux.push_back(a[j]);
            } else{
                ans += "RL";
                aux.push_back(a[j]);
                aux.push_back(a[i]);
            }
        }
        i++;
        j--;
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}