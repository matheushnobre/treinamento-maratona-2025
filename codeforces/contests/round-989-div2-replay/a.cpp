#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int number = min(a, b);
        while(true){
            if((number % a) == (number % b)){
                cout<<number<<endl;
                break;
            }
            number++;
        }
    }

    return 0;
}