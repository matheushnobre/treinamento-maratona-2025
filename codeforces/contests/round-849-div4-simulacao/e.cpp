#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, qn=0, qz=0;
    long long soma = 0;
    cin>>n;
    vector<int> vetor(n);

    for(int i=0; i<n; i++){
        cin>>vetor[i];
        if(vetor[i]==0) qz++;
        else if(vetor[i]<0) qn++;
        vetor[i] = abs(vetor[i]);
    }

    if(qz>0) qn=0;
    else if(qn%2==0) qn=0; 
    else qn=1;
    sort(vetor.begin(), vetor.end());
    for(int i=0; i<n; i++){
        if(i < qn) soma -= vetor[i];
        else soma += vetor[i];
    }
       
    cout<<soma<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}