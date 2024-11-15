#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n, v;
    cin>>t;
    for(int ct=0; ct<t; ct++){
        cin>>n;
        int rt=1, mr=0, l=-1;
        for(int i=0; i<n; i++){
            cin>>v;
            if(v==l) rt++;
            else{
                mr = max(rt, mr);
                l = v;
                rt = 1;
            }
        } mr = max(rt, mr);
        int a = n - mr;
        cout<<a<<endl;
    }

    return 0;
}