/*
ID: matheus30
TASK: skidesign
LANG: C++                 
*/             

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("skidesign.in", "r", stdin);
    freopen("skidesign.out", "w", stdout);

    int n, v;
    vector<int> val;
    long long answer=INF;
   
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v;
        val.push_back(v);
    }
    sort(val.begin(), val.end());
    int menor=val[0], maior=val[n-1];
    for(int vmin=menor; vmin<=maior; vmin++){
        int vmax = vmin+17;
        long long temp=0;
        for(int i=0; i<n; i++){
            if(val[i] < vmin)
                temp += (vmin-val[i]) * (vmin-val[i]);
            else if(val[i] > vmax)
                temp += (val[i]-vmax) * (val[i]-vmax);
        }
        answer = min(temp, answer);
    }
    cout<<answer<<endl;

    return 0;
}