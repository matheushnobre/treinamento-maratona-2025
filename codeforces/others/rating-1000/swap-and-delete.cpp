#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int o1=0, o0=0, answer=0;
        for(char c : s){
            if(c == '0') o0++;
            else o1++; 
        }
        int j=0;
        string nova="";
        for(unsigned int i=0; i<s.size(); i++){
            char c = s[j];
            if(c == '0' && o1 > 0) {
                nova += "1";
                o1--;
                j++;
            }
            else if(c == '1' && o0 > 0) {
                nova += "0";
                o0--;
                j++;
            } else{
                answer++;
            }
        }
        cout<<answer<<endl;
    }

    return 0;
}