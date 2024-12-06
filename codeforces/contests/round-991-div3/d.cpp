#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s, answer;

    cin>>t;
    while(t--){
        cin>>s;
        int n = s.size();
        for(int i=0; i<n; i++){
            char maior=s[i];
            int index=i;
            for(int j=i+1; j<min(i+10, n); j++){
                if(s[j] - (j-i) > maior){
                    maior = s[j] - (j-i);
                    index = j;
                }
            }
        
            while(index > i){
                swap(s[index], s[index-1]);
                index--;
                s[index] = s[index] - 1;
            }
        }
        cout<<s<<endl;
    }


    return 0;
}