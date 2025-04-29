#include <bits/stdc++.h>
using namespace std;

struct Presente{
    int i, v;

    Presente(int i, int h, int w, int l){
        this->i = i;
        this->v = h*w*l;
    }

    bool operator<(const Presente& o) const{
        if(this->v == o.v) return this->i > o.i;
        return this->v < o.v;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;

    while(t--){
        int n, k, i, h, w, l;
        cin>>n>>k;
        priority_queue<Presente> lista;

        for(int j=0; j<n; j++){
            cin>>i>>h>>w>>l;
            lista.push(Presente(i, h, w, l));
        }

        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i] = lista.top().i;
            lista.pop();
        } 

        sort(ans.begin(), ans.end());
        for(int i=0; i<k; i++) {
            cout<<ans[i];
            if(i!=k-1)cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}