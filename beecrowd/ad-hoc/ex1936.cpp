#include <bits/stdc++.h>
using namespace std;

int fatoriais[9] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362800};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ans = 0;
    int j = 8;
    while(n != 0){
        if(n - fatoriais[j] >= 0){
            n -= fatoriais[j];
            ans++;
        } else{
            j--;
        }
    }
    cout<<ans<<endl;
    return 0;
}