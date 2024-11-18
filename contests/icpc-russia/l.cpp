#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int p25=0, p21=0, p18=0;
    int answer=0;
    while (p25 < n || p21 < n || p18 < n){
        answer++;
        int tam = 60;
        if(p25 < n){
            if(p25 == n-1){
                tam-=25;
                p25++;
            } else{
                tam-=50;
                p25+=2;
            }
        }
        if(p21 < n){
            for(int i=0; i<2; i++){
                if(tam >= 21){
                    tam -= 21;
                    p21++;
                }
            }
        }
        if(p18 < n){
            for(int i=0; i<3; i++){
                if(tam >= 18){
                    tam -= 18;
                    p18++;
                }
            }
        }
    }

    cout<<answer;
}