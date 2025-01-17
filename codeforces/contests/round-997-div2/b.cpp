#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char c;
    cin>>n;
    vector<pair<int, int>> answers;
    for(int i=0; i<n;i++){
        answers.push_back({0, i+1});
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>c;
            if(c=='1' && j>i){
                answers[i].first++;
            } else if(c=='0' && j>i){
                answers[j].first++;
            }
        }
    }

    sort(answers.rbegin(), answers.rend());
    for(int i=0; i<n; i++){
        cout<<answers[i].second<<" ";
    } cout<<endl;
    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}