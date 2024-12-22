#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, answer=0;
    string s1, s2;
    cin>>n>>s1>>s2;
    int check[n] = {0};

    for(int i=0; i<n; i++){
        if(s2[i] == '1'){
            if(i != 0 && s1[i-1] == '1' && check[i-1] == 0){
                check[i-1] = 1;
                answer++;
            } else if(s1[i] == '0' && check[i] == 0){
                check[i] = 1;
                answer++;
            } else if(i != n-1 && s1[i+1] == '1' && check[i+1] == 0){
                check[i+1] = 1;
                answer++;
            }
        }
    }

    cout<<answer<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}