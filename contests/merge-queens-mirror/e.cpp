#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
#define INF 100000000

vector<vector<int>> grafo(MAX), v(MAX, vector<int>(11, 0));
vector<int> atm(MAX);
int n, m, k;

int bfs(){
	int saida = INF;
	queue<tuple<int, int, int>> fila;
	fila.push({1, 0, 0});
	v[1][0] = 0;

	while(!fila.empty()){
		tuple<int, int, int> vt = fila.front();
		fila.pop();
        if(get<0>(vt) == n) saida = min(saida, get<1>(vt));
		//cout<<"vt = "<<vt<<endl;

		for(int vz : grafo[get<0>(vt)]){
			int aux = get<2>(vt) + (atm[get<0>(vt)-1] != atm[vz-1]);
            if(aux > k) continue;
			if(v[vz][aux]) continue;
			v[vz][aux] = 1;
			fila.push({vz, get<1>(vt)+1, aux});
		}
	}
    if(saida == INF) saida=-1;
	return saida;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m>>k;

	for(int i=0; i<n; i++) cin>>atm[i];
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}

	cout<<bfs()<<endl;

	return 0;
}