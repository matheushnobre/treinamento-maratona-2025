#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    ll y, x, answer;
    cin>>t;
    while(t--){
        cin>>y>>x;
        if(x==y && y==1)
            answer = 1;
        else if(y>=x){
            if(y%2==0)
                answer = y*y - x + 1;
            else
                answer = (y-1)*(y-1) + x;
        } else{
            if(x%2 == 1)
                answer = x*x - y + 1;
            else
                answer = (x-1)*(x-1) + y;
        }
        cout<<answer<<endl;
    }


    return 0;
}