#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int> vetor(n), prefix(n+1);
    for(int i=0; i<n; i++){
        cin>>vetor[i];
        if(i == 0) prefix[i+1] = vetor[i];
        else prefix[i+1] = prefix[i] + vetor[i];
    }

    int a, b;
    for(int i=0; i<k; i++){
        cin>>a>>b;
        cout<<prefix[b] - prefix[a-1]<<endl;
    }
    return 0;
}