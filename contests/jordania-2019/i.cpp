#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string s;
    cin>>n>>s;
    vector<int> ans(n+1);

    stack<int> num;

    int valor=0;
    int i=0;
    while(i < s.size()){
        while(s[i] != '(' && s[i] != ')'){
            valor *= 10;
            valor += s[i]-'0';
            i++;
        } if(valor != 0) {
  //          cout<<"valor = "<<valor<<endl;
            num.emplace(valor);
            valor = 0;
        }

        if(s[i] != '(' && s[i] !=')') break;
//        cout<<"here, i  ="<<i<<endl;

        if(s[i] == ')'){
            int v = num.top();
            num.pop();
            ans[v] = num.top();
        }

        i++;
    }

    for(int i=1; i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}