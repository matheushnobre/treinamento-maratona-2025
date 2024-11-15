#include <bits/stdc++.h>
using namespace std;

#define MAXN 200010

int main(){
    int t, n;
    int vetor[MAXN];
    cin>>t;
    for(int ct=0; ct<t; ct++){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>vetor[i];

        string ans="YES";
        for(int i=0; i<n-1; i++){
            if(vetor[i] > vetor[i+1]){
                if(vetor[i] - vetor[i+1] == 1){
                    swap(vetor[i], vetor[i+1]);
                } else{
                    ans="NO";
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}