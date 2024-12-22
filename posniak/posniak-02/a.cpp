// Questão que recomendei para o torneio, já havia feito anteriormente

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 200010

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k;
    int a[MAX] = {0};
    int b[MAX] = {0};
    ll prefix[MAX] = {0};
    int maiores[MAX] = {0};

    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            prefix[i] = prefix[i-1] + a[i];
        }
        for(int i=1; i<=n; i++){
            cin>>b[i];
            maiores[i] = max(maiores[i-1], b[i]);
        }

        int index = min(k, n);
        ll answer = prefix[index] + (maiores[index] * (k-index));

        while (index > 0){
            index -= 1;
            answer = max(answer, prefix[index] + (maiores[index] * (k-index)));
        }

        cout<<answer<<endl;
    }
}

