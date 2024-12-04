#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    vector<string> vs;
    vector<int> vmin;
    vector<int> vmax;

    int n, x, y;
    string s;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>s>>x>>y;
        vs.push_back(s);
        vmin.push_back(x);
        vmax.push_back(y);
    }

    int inicioMin=0, inicioMax=1000;
    for(int i=n-1; i>=0; i--){
        if(vs[i] == "on"){
            inicioMin = inicioMin - vmax[i];
            inicioMax = inicioMax - vmin[i];
        }
        else if(vs[i] == "none"){
            inicioMin = max(inicioMin, vmin[i]);
            inicioMax = min(inicioMax, vmax[i]);
        }
        else{
            inicioMin = inicioMin + vmin[i];
            inicioMax = inicioMax + vmax[i];
        }
    }
    
    inicioMin = max(inicioMin, 0);

    int fimMin=0, fimMax=1000;
    for(int i=0; i<n; i++){
        if(vs[i] == "on"){
            fimMin = fimMin + vmin[i];
            fimMax = fimMax + vmax[i];
        }
        else if(vs[i] == "none"){
            fimMin = max(fimMin, vmin[i]);
            fimMax = min(fimMax, vmax[i]);
        }
        else{
            fimMin = fimMin - vmax[i];
            fimMax = fimMax - vmin[i];
        }
    }

    fimMin = max(fimMin, 0);


    cout<<inicioMin<<" "<<inicioMax<<endl;
    cout<<fimMin<<" "<<fimMax<<endl;
    return 0;
}