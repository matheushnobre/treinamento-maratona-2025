#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m, k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>m>>k>>s;
        int c=0, a=0;
        int i=0;
        while(i<n){
            if(s[i] == '0') c++;
            else c=0;
            if(c==m){
                a++;
                i += k-1;
                c=0;
            }
            i+=1;
        }
        cout<<a<<endl;
    }

    return 0;
}