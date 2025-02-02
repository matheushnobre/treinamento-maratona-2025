// 2D Prefix Sum

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    cin>>n>>m>>k;
    int arr[n+1][m+1], p[n+1][m+1];
    memset(arr, 0, sizeof(arr));
    memset(p, 0, sizeof(p));

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++){
            cin>>arr[i][j];
            p[i][j] = p[i][j-1] + p[i-1][j] - p[i-1][j-1] + arr[i][j];
        }
    }

    int a, A, b, B;
    for(int i=0; i<k; i++){
        cin>>a>>b>>A>>B;
        cout<<p[A][B] - p[a-1][B] - p[A][b-1] + p[a-1][b-1]<<endl;
    }

    return 0;
}