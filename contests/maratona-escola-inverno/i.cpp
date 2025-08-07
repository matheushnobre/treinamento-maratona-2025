#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll dp[20][2][10];

ll solve(int ind, bool menor, int ant, vector<int>& digitos){
    if(ind == digitos.size()) return ant != -1;
    if(ant != -1 && dp[ind][menor][ant] != -1) return dp[ind][menor][ant];
    
    ll ret = 0;
    if(ant == -1) ret += solve(ind+1, 1, -1, digitos);

    for(int i=0; i<10; i++){
        if((i == ant) || (i == 0 and ant == -1)) 
            continue;
        else if(menor)
            ret += solve(ind+1, menor, i, digitos);
        else if(i < digitos[ind])
            ret += solve(ind+1, 1, i, digitos);
        else if(i == digitos[ind])
            ret += solve(ind+1, 0, i, digitos);
    }

    if(ant != -1) dp[ind][menor][ant] = ret;
    return ret;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<20; i++) 
        for(int j=0; j<2; j++)
            for(int k=0; k<10; k++) 
                dp[i][j][k] = -1;

    ll ans = 0;
    ll n;
    cin>>n;

    // convertendo n em um vetor de dígitos
    vector<int> digitos;
    while(n != 0){
        digitos.push_back(n % 10);
        n = n/10;
    }
    int i=0, j=digitos.size()-1;
    while(i < j){
        swap(digitos[i], digitos[j]);
        i++;
        j--;
    }

    // calculando a resposta de forma recursiva com dp
    ans = solve(0, 0, -1, digitos);
    cout<<ans<<endl;

    return 0;
}