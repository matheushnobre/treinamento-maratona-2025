#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    cout<<3<<endl;
    
    if(a <= b)
        cout<<3*a-2*b-1<<" "<<b<<" "<<b+1;
    else
        cout<<3*a-2*b+1<<" "<<b<<" "<<b-1;


    return 0;
}