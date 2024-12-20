#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    while(true){
        vector<int> entrada(n);
        for(int i=0; i<n; i++){
            cin>>entrada[i];
            if(entrada[i] == 0) return 0;
        }

        int maior = n;
        stack<int> pilha;
        for(int i=n-1; i>=0; i--){
            pilha.push(entrada[i]);
            while(!pilha.empty() && pilha.top() == maior){
                maior = pilha.top() - 1;
                pilha.pop();
            }
        }
        if(pilha.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}

int main(){
    int n;
    scanf("%d", &n);
    while(n != 0){
        solve(n);
        scanf("%d", &n);
        cout<<endl;
    }

    return 0;
}