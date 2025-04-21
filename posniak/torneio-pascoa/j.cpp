#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<string> v;
    string s, p;
    
    while(true){
        cin>>s;
        if(s=="0") break;
        cin>>p;
        v.push_back(p);
    }

    sort(v.begin(), v.end());
    for(string np : v){
        cout<<"Package "<<np<<endl;
    } cout<<endl;
}

int main(){
    int n;
    while(cin>>n) solve();
    return 0;
}