#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, v;
    int numbers[30] = {0};
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>v;
        for(int j=0; j<=32; j++)
            if(v & (1 << j))
                numbers[j] += 1;
    }

    for(int i=0; i<n; i++){
        v = 0;
        for (int j=0; j<30; j++){
            if(numbers[j] > 0){
                numbers[j] -= 1;
                v |= (1<<j);
            }
        }
        cout<<v<<" ";
    }

    return 0;
}