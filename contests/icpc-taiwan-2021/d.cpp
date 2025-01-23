#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    double v;

    cin>>n;
    if (n==1){
        cout<<1<<endl;
    }else{
        v = 0.5 +(1/(2*(n-1)));
        cout<<fixed<<setprecision(6);
        cout<<v<<endl;
    }
}