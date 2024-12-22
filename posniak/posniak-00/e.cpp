#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	string letters = "abcdefghijklmnopqrstuvwxyz";
	int t, n, v;
	cin>>t;
	while(t){
		int o[26] = {0};
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>v;
			for(int j=0; j<26; j++){
				if(o[j] == v){
					o[j] += 1;
					cout<<letters[j];
					break;
				}
			}
		} cout<<endl;
		t--;
	}

	return 0;
}