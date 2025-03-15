// Longest Commom Subsequence (LCS)

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, t;
    cin>>s>>t;

    int n = s.size(), m = t.size();
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));

    // DP para calcular maior LCS
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i] == t[j]) 
                dp[i+1][j+1] = 1 + dp[i][j];   
            else 
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
        }
    }
    
    // Reconstruindo a solução
    int i=n, j=m;
    string saida;

    while (i>0 && j>0) {
        if (s[i-1] == t[j-1]) { 
            saida.push_back(s[i-1]);
            i--; 
            j--;
        } 
        else if (dp[i-1][j] > dp[i][j-1]) 
            i--;
        else 
            j--;
    }

    reverse(saida.begin(), saida.end()); 
    cout<<saida<<endl;

    return 0;
}