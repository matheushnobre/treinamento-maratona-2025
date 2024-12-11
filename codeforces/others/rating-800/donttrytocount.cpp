#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    string x, s;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>x>>s;
        int answer = 0;
        while (x.size() < s.size()){
            answer++;
            x = x + x;
        }

        bool saida = false;
        for(unsigned int i=0; i<=x.size()-s.size(); i++){
            bool possivel = true;
            for(unsigned int j=0; j<s.size(); j++){
                if(x[i+j] != s[j]) possivel = false;
            }
            if(possivel) saida = true;
        }

        if(saida) cout<<answer<<endl;
        else{
            answer++;
            x = x+x;
            for(unsigned int i=0; i<=x.size()-s.size(); i++){
                bool  possivel = true;
                for(unsigned int j=0; j<s.size(); j++){
                    if(x[i+j] != s[j]) possivel = false;
                }
                if(possivel) saida = true;
            }
            if(saida) cout<<answer<<endl;
            else cout<<-1<<endl;
        }
    }

    return 0;
}