#include <bits/stdc++.h>
using namespace std;

void solve(){
    int answer=0;
    char c;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            cin>>c;
            if(c == 'X'){
                int itemp = i, jtemp = j;
                if(itemp > 5) itemp = 10-i+1;
                if(jtemp > 5) jtemp = 10-j+1;
                answer += min(itemp, jtemp);
            }
        }
    }

    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}