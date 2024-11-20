#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string letters="abcdefghijklmnopqrstuvwxyz";
    map<char, int> l;
    for(int i=0; i<26; i++)
        l[letters[i]] = i;
    
    int t, n, m;
    string lida, resp;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<array<int, 26>> o(m);

        for(int i=0; i<2*n-1; i++){
            cin>>lida;
            for(int j=0; j<m; j++){
                int index=l[lida[j]];
                o[j][index] += 1;
            }
        }

        resp="";
        for(int i=0; i<m; i++){
            for(int j=0; j<26; j++){
                if (o[i][j] % 2 == 1){
                    resp += letters[j];
                    break;
                }
            }
        }

        cout<<resp<<endl;
        cout<<flush;
    }

    return 0;
}