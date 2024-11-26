#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t, n;
    char v;
    cin>>t;
    while(t--){
        cin>>n;
        int total = 0, sequence = 0, answer = -1;
        for(int i=0; i<n; i++){
            cin>>v;
            if(v == '.') {
                sequence++;
                total++;
                if(sequence==3) answer=2;
            }
            else sequence=0;
        }
        if(answer == -1) answer = total;
        cout<<answer<<endl;
    }

    return 0;
}