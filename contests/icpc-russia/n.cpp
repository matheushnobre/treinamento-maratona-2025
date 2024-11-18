#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string e;
    cin>>t;
    while(t--){
        cin>>e;
        int n1 = e[0] - '0';
        char o = e[1];
        int n2 = e[2] - '0';

        if(o=='='){
            n1 = n2;
        } else if(o=='>'){
            if(n1 < n2) o = '<';
            else if(n1==n2) o = '=';
            
        } else if(o=='<'){
            if (n1 > n2) o = '>';
            else if (n1==n2) o = '=';
        }
        cout<<n1<<o<<n2<<endl;
    }

    return 0;
}