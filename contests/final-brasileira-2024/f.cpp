// Finding Privacy
// Este é o exato código que utilizamos para passar o problema na Final Brasileira

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    string s="";
    cin>>n>>k;
    for(int i=0; i<k; i++){
        if(i == 1 && s[0] == 'X')
            s += '-';
        else if(i == 1 && s[0] == '-'){
            s += 'X';
            n -= 1;
        } 
        else{
            if(i != 0 && s[i-1] == 'X'){
                s += '-';
            } else if (i!=0 && s[i-1] == '-' and s[i-2] == '-'){
                s += 'X';
                n -= 1;
            } else{
                if((k-i)/2 < n && (k-i) % 2 == 1){
                    s += 'X';
                    n -= 1;
                }
                else{
                    s += '-';
                }
            }
        }
    }
    if(k == 1){
        s = "X";
    }
    else if (s[k-1] == '-' && s[k-2] == '-'){
        s = "*";
    }
    else if (n != 0){
        s = "*";
    }
    cout<<s<<endl;
}