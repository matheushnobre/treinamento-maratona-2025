#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> aux;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    if(n == 0) cout<<"Dinossauro"<<endl;
    else if(n==1) cout<<"DC"<<endl;
    else if(n==2) cout<<"DCC"<<endl;
    else if(n==3) cout<<"DCC Code"<<endl;
    else if(n==4) cout<<"DCC Code Cup"<<endl;
    else cout<<"DCC Cod Cup Championship"<<endl;
    return 0;
}