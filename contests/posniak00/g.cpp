#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, saida=0;
	string e;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>e;
		if(e[0] == '+' || e[1] == '+') saida+=1;
		else saida-=1;
	}
	cout<<saida<<endl;


	return 0;
}