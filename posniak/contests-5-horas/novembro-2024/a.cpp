#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
#define INF 2000000000000

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
	int n, m, qtd;
    ll preco;
    ll v;
	cin>>n>>m;
    vector<int> matriz[n];
	int o[m+1] = {0};
	ll auxPreco[n];

	for(int i=0; i<n; i++){
		cin>>qtd>>preco;
		auxPreco[i] = preco;
		for(int j=0; j<qtd; j++){
            cin>>v;
            matriz[i].push_back(v);
        } 
	}


	int i=0, j=0, sx=0, sy=0;
	qtd = 0;
	ll precoTemp = 0, menor = INF;

	while (i<n){
		while(j<n && qtd != m){
			precoTemp += auxPreco[j];
			for(int v : matriz[j]){
				o[v] += 1;
				if(o[v] == 1) qtd++;
			}
			if(qtd == m){
				if(precoTemp < menor){
					menor = precoTemp;
					sx = i+1;
					sy = j+1;
				}
			}
			j++;
		}

		precoTemp -= auxPreco[i];
		for(int v : matriz[i]){
			o[v] -= 1;
			if(o[v] == 0) qtd--;
		}
		if(qtd == m){
			if(precoTemp < menor){
				menor = precoTemp;
				sx = i+2;
				sy = j;
			}
		}
		i++;
	}

	if(menor == INF){
		cout<<-1<<endl;
	} else{
		cout<<menor<<endl;
		cout<<sx<<" "<<sy<<endl;
	}

	return 0;
}