#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while (t--){
        map<int, int> freq;
        cin>>n;
        vector<int> vetor(n, 0);
        for(int i=0; i<n; i++){
            cin>>vetor[i];
            if(freq.count(vetor[i]) == 0) freq[vetor[i]] = 1;
            else freq[vetor[i]]++;
        }

        if(freq.size() == 1) cout<<"yes";
        else if(freq.size()==2){
            int i=0;
            int f[2] = {0};
            for(auto &it : freq){
                f[i] = it.second;
                i++;
            }
            if(n%2 == 0 && f[0] == f[1]) cout<<"yes";
            else if(n%2 == 1 && abs(f[0] - f[1]) == 1) cout<<"yes";
            else cout<<"no";
        } else cout<<"no"; 
        cout<<endl;
    }

    return 0;
}