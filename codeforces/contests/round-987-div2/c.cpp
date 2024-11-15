#include <bits/stdc++.h>
using namespace std;

#define MAXN 200010

int main(){
    int t, n;
    vector<int> vetor = {1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 9, 9, 1, 8, 10, 10, 11, 11, 12, 13, 13, 1, 12}; 
    int c=14;
    for(int i=27; i<MAXN; i+=2){
        vetor.push_back(c);
        vetor.push_back(c);
        c++;
    }

    cin>>t;
    while(t){
        cin>>n;
        if(n % 2 == 1 && n <= 25){
            cout<<-1<<endl;
        }
        else if(n % 2 == 1){
            for(int i=0; i<n; i++){
                cout<<vetor[i]<<" ";
            } cout<<endl;
        }
        else{
            for(int i=0; i<n/2; i++)
                cout<<i+1<<" "<<i+1<<" ";
            cout<<endl;
        }
        t--;
    }

    return 0;
}