#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n;
    long long answer;
    string s;
    cin>>t;
    while(t--){
        int o[26] = {0};
        answer = 0;
        int add = 0;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            char l = s[i];
            if(o[l-'a'] == 0){
                add++;
                o[l-'a'] = 1;
            }
            answer += add;
        }
        cout<<answer<<endl;
    }


    return 0;
}