#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, v;
    vector<int> pares, impares;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v;
        if(v % 2 == 0) pares.push_back(v);
        else impares.push_back(v);
    }


    vector<vector<int>> grupos;
    int i=0;
    while(!pares.empty() || !impares.empty()){
        vector<int> g;
        if(i % 2 == 0){
            if(!pares.empty()) {
                g.push_back(pares[pares.size()-1]);
                pares.pop_back();
            } else if(impares.size() >= 2){
                for(int i=0; i<2; i++){
                    g.push_back(impares[impares.size()-1]);
                    impares.pop_back();
                }
            } else if(impares.size() == 1){
                grupos.pop_back();
                break;
            } else if(impares.size() == 0){
                break;
            }
        } else{
            if(!impares.empty()){
                g.push_back(impares[impares.size()-1]);
                impares.pop_back();
            } else{
                break;
            }
        }

        grupos.push_back(g);
        i++;

    }

    cout<<grupos.size()<<endl;

    return 0;
}