#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    vector<vector<int>> a(n);
    for(int i=0; i<n; i++){
        int l, r, real;
        cin>>l>>r>>real;
        a[i] = {l, r, real};
    }

    sort(a.begin(), a.end());
    int atual = k, temp = 0;
    for(int i=0; i<n; i++){
        //cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
       // cout<<atual<<" "<<temp<<endl;
        if(a[i][0] <= atual && a[i][1] >= atual){
            temp = max(temp, a[i][2]);
          //  cout<<"gh"<<endl;
        }   
        else {
            atual = max(atual, temp);
            temp = atual;
            if(a[i][0] <= atual && a[i][1] >= atual)
                temp = max(temp, a[i][2]);
        }
       // cout<<atual<<" "<<temp<<endl<<endl;
        
    }

    cout<<max(atual, temp)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}