#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n, p, q;
    double v;
    string s;
    cin>>t;
    while(t--){
        map<string, double> prod;
        cin>>n;
        while(n--){
            cin>>s>>v;
            prod[s] = v;
        }
        cin>>p;
        double ans=0;
        while(p--){
            cin>>s>>q;
            ans += prod[s] * q;
        }

        printf("R$ %.2f\n", ans);
    }

    return 0;
}