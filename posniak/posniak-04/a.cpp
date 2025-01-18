#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

struct Node{
    Node* left = nullptr;
    Node* right = nullptr;
    int valor;

    Node(int v){
        valor = v;
    }
};

void solve(){
    int n;
    cin>>n;
    vector<int> p(n), ind(n+1), ans(n);
    
    for(int i=0; i<n; i++){
        cin>>p[i];
        ind[p[i]] = i;
    }

    ans[ind[n]] = 0;
    Node* root = new Node(n);

    for(int i=n-1; i>0; i--){
        Node* aux = root;
        int alt=0;
        while(aux->valor != i){
            alt++;
            if(ind[i] > ind[aux->valor]){
                if(aux->right == nullptr){
                    aux->right = new Node(i);
                } aux = aux->right;
            } else{
                if(aux->left == nullptr){
                    aux->left = new Node(i);
                } aux = aux->left;
            }
        }
        ans[ind[i]] = alt;
    }

    for(int v : ans) cout<<v<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    cin>>t;
    while(t--) solve();
}