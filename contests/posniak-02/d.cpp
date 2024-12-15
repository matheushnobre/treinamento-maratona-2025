#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        unsigned int j=0;
        for(unsigned int i=0; i<a.size(); i++){
            if(a[i] == '?'){
                if(j < b.size()) a[i] = b[j];
                else a[i] = 'a';
                j+=1;
            }
            else if(j < b.size() && a[i] == b[j]) j+=1;
        }

        if(j>=b.size()){
            cout<<"YES\n"<<a<<endl;
        } else cout<<"NO\n";
    }
}