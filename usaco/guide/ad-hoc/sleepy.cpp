#include <bits/stdc++.h>
using namespace std;

bool isOrdenado(vector<int>& vetor){
    for(unsigned int i=1; i<vetor.size(); i++)
        if(vetor[i] < vetor[i-1]) return false;
    return true;
}

void solve(){
    int n, answer=0;
    cin>>n;
    vector<int> vetor(n);
    for(int i=0; i<n; i++) cin>>vetor[i];

    while(!isOrdenado(vetor)){
        int ordenadoAPartir = n-1;
        for(int i=n-1; i>0; i--){
            if(vetor[i] > vetor[i-1]) ordenadoAPartir--;
            else break;
        }

        for(int i=0; i<ordenadoAPartir-1; i++)
            swap(vetor[i], vetor[i+1]);

        for(int i=ordenadoAPartir-1; i<n-1; i++)
            if(vetor[i] > vetor[i+1]) swap(vetor[i], vetor[i+1]);
            else break;
        
        answer++;
    }

    cout<<answer<<endl;
}

int main(){
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
