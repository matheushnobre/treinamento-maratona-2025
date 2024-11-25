#include <bits/stdc++.h>
using namespace std;

#define MAXN 200010

int main(){
    int t, n, k, b, c;
    cin>>t;
    
    while (t--){
        cin>>n>>k;
        vector<int> vetor(k+1, 0);
        for(int i=0; i<k; i++){
            cin>>b>>c;
            vetor[b] += c;
        }
        sort(vetor.rbegin(), vetor.rend()); 

        long long answer = 0;
        for(int i=0; i<min(n,k); i++){
            answer += vetor[i];
        } 
        cout<<answer<<endl;
    }

    return 0;
}