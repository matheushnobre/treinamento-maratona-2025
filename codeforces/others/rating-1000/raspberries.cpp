#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n, k, x;
    int array[MAXN];
    cin>>t;
    while(t--){
        int answer = 5;
        cin>>n>>k;

        for(int i=0; i<n; i++){
            cin>>array[i];
            if(array[i] % k == 0) answer = 0;
            else{
                int faltam = k - (array[i] % k);
                answer = min(answer, faltam);
            }
        }

        if(k == 4){
            int answerTemp;
            int cont = 0;
            for(int i=0; i<n; i++){
                if(array[i] % 2 == 0) cont++;
            }
            if(cont == 0) answerTemp = 2;
            else if(cont == 1) answerTemp = 1;
            else answerTemp = 0;

            answer = min(answer, answerTemp);
        }

        cout<<answer<<endl;
    }
    

    return 0;
}