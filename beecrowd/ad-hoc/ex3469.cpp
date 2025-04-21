#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> count(MAX);
    int n, v; 
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>v;
        count[v]++;
    }

    int soma=0, aux=-1, ans;
    for(int i=0; i<MAX; i++){
        soma += count[i];
        if(count[i] != 0 && soma == n/2 && n%2==0){
            aux = i;
        }
        if(soma > n/2){
            if(aux != -1)
                ans = (i+aux)/2;
            else 
                ans = i;
            cout<<ans<<endl;
            return 0;
        }
    }

    return 0;
}