#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> cartas;
    cartas["4P"] = 14;
    cartas["7C"] = 13;
    cartas["AE"] = 12;
    cartas["7O"] = 11;
    
    vector<string> oth = {"3", "2", "A", "K", "J", "Q", "7", "6", "5", "4"};
    int aux = 10;

    for(string c : oth){
        for(string o : {"O", "P", "C", "E"}){
            string s = c+o;
            cartas[s] = max(cartas[s], aux);
        }
        aux--;
    }

   // for(auto& s : cartas){
    //    cout<<s.first<<" "<<s.second<<endl;
  //  }

    vector<vector<int>> jogadores(4, vector<int>(3));
    vector<vector<int>> utilizados(4, vector<int>(3));

    for(int i=0; i<4; i++){
        string a, b, c;
        cin>>a>>b>>c;
        jogadores[i][0] = cartas[a];
        jogadores[i][1] = cartas[b];
        jogadores[i][2] = cartas[c];

        sort(jogadores[i].rbegin(), jogadores[i].rend());
        //for(int j : jogadores[i]) cout<<j<<" ";
        //cout<<endl;
    }

    for(int t=0; t<3; t++){
        int dA=0, dB=0;
        //cout<<"turno "<<t<<endl;
        for(int at=0; at<4; at++){
            // 1º jogada do 1º turno
            if(t == 0 && at == 0){
               // cout<<"1 jogada, A jogou "<<jogadores[0][0]<<endl;
                dA = jogadores[0][0];
                utilizados[0][0] = 1;
                continue;
            }

            int maior = -1, menor = -1;
            for(int c=0; c<=2; c++){
                if(!utilizados[at][c]){
                    if(maior == -1) maior = c;
                    menor = c;
                }
            }

            // Jogador 1 ou 3
            if(at == 0 || at == 2){
                // esta ganhando ou nao eh possivel virar o jogo
                if(dA > dB || jogadores[at][maior] <= dB){
                   // cout<<"jogou "<<jogadores[at][menor]<<endl;
                    utilizados[at][menor] = 1;
                    dA = max(dA, jogadores[at][menor]);
                } else{
                    utilizados[at][maior] = 1;
                    dA = max(dA, jogadores[at][maior]);
                    //cout<<"jogou "<<jogadores[at][maior]<<endl;
                }
                
            } else{
                if(dB > dA || jogadores[at][maior] <= dA){
                    utilizados[at][menor] = 1;
                    dB = max(dB, jogadores[at][menor]);
                    //cout<<"jogou "<<jogadores[at][menor]<<endl;
                } else{
                    utilizados[at][maior] = 1;
                    dB = max(dB, jogadores[at][maior]);
                    //cout<<"jogou "<<jogadores[at][maior]<<endl;
                }
            }
        }
        
        if(dA > dB) cout<<1<<" ";
        else if(dA == dB) cout<<0<<" ";
        else cout<<"2 ";
    } cout<<endl;

    return 0;
}