#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, v, pp=0;
    char o;
    cin>>t;
    while(t--){
        cin>>o>>v;
        if(o == 'P') pp += v;
        else{
            pp -= v;
            if(pp < 0) {
                cout<<"YES"<<endl;
                pp=0;
            }
            else cout<<"NO"<<endl;
        }
    }
}