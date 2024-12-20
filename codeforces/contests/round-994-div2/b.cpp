#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n>>s;

    for(int i=0; i<n; i++){
        if(s[i] == 'p'){
            for(int j=i+1; j<n; j++){
                if(s[j] == 's'){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }

        else if(s[i] == 's' && i != 0){
            for(int j=i+1; j<n-1; j++){
                if(s[j] == 'p'){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}