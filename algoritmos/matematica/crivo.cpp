#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010
vector<bool> crivo(MAX);

int main(){
    crivo[0] = true;
    crivo[1] = true;
    
    for(int i=2; i*i<MAX; i++){
        if(crivo[i] == false){
            for(int j=i*i; j<MAX; j+=i){
                crivo[j] = true;
            }
        }
    }

    return 0;
}