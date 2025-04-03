#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int merge(vector<int>&lista, int inicio, int meio, int fim){
  int r = 0;
  int i = inicio;
  int j = meio+1;
  vector<int> n(fim-inicio+1);
  
  int aux=0;
  while(i <= meio && j <= fim){
    if(lista[i]<=lista[j]){
      n[aux] = lista[i];
      i++;
    } else{
      n[aux] = lista[j];
      r += (meio-i+1);
      j++;
    }
    aux++;
  }
  
  while(i <= meio){
    n[aux] = lista[i];
    i++;
    aux++;
  }
  while(j <= fim){
    n[aux] = lista[j];
    j++;
    aux++;
  }
  
  for(int k=inicio; k<=fim; k++){
    lista[k] = n[k-inicio];
  }
  
  return r;
}

int mergeSort(vector<int>& v, int inicio, int fim){
  int r = 0;
  
  if(inicio < fim){
    int meio = (inicio+fim)/2;
    r += mergeSort(v, inicio, meio);
    r += mergeSort(v, meio+1, fim);
    r += merge(v, inicio, meio, fim);
  }
  
  return r;
}

void solve(int n){
    if(n == 0) return;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(mergeSort(v, 0, n-1) % 2 == 0) cout<<"Carlos"<<endl;
    else cout<<"Marcelo"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n) solve(n);
    return 0;
}