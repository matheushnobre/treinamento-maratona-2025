#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cin.ignore();
    map<string, int> nomes;
    for(int i=0; i<n; i++){
        string n;
        getline(cin, n);
        //cout<<"n = "<<n<<endl;
        nomes[n] = 1;
    }

    int c=0;
    for(int i=0; i<n; i++){
        string n;
        getline(cin, n);
        if(nomes[n] == 1) nomes[n] = 2;
        else c++;
    }

    cout<<c<<endl;
    for(auto& n : nomes){
        if(n.second == 1) cout<<n.first<<endl;
    }
}