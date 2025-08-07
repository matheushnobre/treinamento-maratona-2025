#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> fila;

void propagar(vector<int>& ans, int atual, int n){
    if(atual == 0){
        if(ans[n-1] == 0) {
            ans[n-1] = ans[atual] + 1;
            fila.push({ans[n-1], n-1});
        }
        if(ans[1] == 0) {
            ans[1] = ans[atual] + 1;
            fila.push({ans[1], 1});
        }

    } else if(atual == n-1){
        if(ans[n-2] == 0) {
            ans[n-2] = ans[atual] + 1;
            fila.push({ans[n-2], n-2});
        }
        if(ans[0] == 0) {
            ans[0] = ans[atual] + 1;
            fila.push({ans[0], 0});
        }
    } else{
        if(ans[atual-1] == 0) {
            ans[atual-1] = ans[atual] + 1;
            fila.push({ans[atual-1], atual-1});
        }
        if(ans[atual+1] == 0) {
            ans[atual+1] = ans[atual] + 1;
            fila.push({ans[atual+1], atual+1});
        }
    }

      /// for(int i=0; i<n; i++){
      //      cout<<ans[i]<<" ";
      //  }
      //  cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> original(n), ans(n);
    vector<pair<int, int>> a(n);

    for(int i=0; i<n; i++) {
        cin>>a[i].first;
        a[i].second = i;
        original[i] = a[i].first;
    }

    sort(a.begin(), a.end());

    int last = a[0].first, menor = a[0].first;

    for(int i=0; i<n; i++){
      //  cout<<endl;
        int v = a[i].first;
        int index = a[i].second;

        if(v == last){
        //    cout<<v<<" = ao ultimo"<<endl;
            if(ans[index] == 0){
                ans[index] = v;
                fila.push({v, index});
            //    cout<<v<<" adicionado"<<endl;
            }
            
        
        } else{
           // cout<<"v = "<<v<<" ";
           // cout<<"diferente do last"<<endl;

            while(!fila.empty() && fila.front().first < v){
                int valor = fila.front().first;
                int atual = fila.front().second;
                fila.pop();
             //   cout<<"valor a propagar="<<valor<<endl;
              //  cout<<"propagar idx = "<<atual<<endl;
                propagar(ans, atual, n);
            }

            if(ans[index] == 0){
              //  cout<<"finalmente adicionar o "<<v<<" no idx = "<<index<<endl;
                ans[index] = v;
                fila.push({v, index});
            }
        }

        last = v;
       // for(int i=0; i<n; i++){
        //    cout<<ans[i]<<" ";
        //}
       // cout<<endl;

    }
    
    int maior = 0;
    for(int i=0; i<n; i++){
       // cout<<ans[i]<<" ";
        maior = max(maior, ans[i]);
    }
   // cout<<endl;

    cout<<maior<<endl;
    return 0;
}