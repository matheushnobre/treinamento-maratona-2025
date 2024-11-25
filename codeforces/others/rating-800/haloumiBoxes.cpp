#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t, n, k;
    int vetor[100];
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0; i<n; i++) cin>>vetor[i];
        if(k > 1) cout<<"YES"<<endl;
        else {
            bool order=true;
            for(int i=1; i<n; i++)
                if(vetor[i] < vetor[i-1]) order=false;
            if(order) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}