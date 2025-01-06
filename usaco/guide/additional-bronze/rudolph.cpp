#include <bits/stdc++.h>
using namespace std;

long double pi = 3.1415926535;

void solve(){
    int n;
    long double d, h, answer=0;
    cin>>n>>d>>h;
    vector<int> e(n);
    for(int i=0; i<n; i++) cin>>e[i];

    long double tg = (h / (d/2)); // cateto oposto / cateto adjacente
    long double ang = atan(tg) * 180 / pi;
    long double areaCompleta = (d * h) / 2;

    //cout<<"area completa = "<<areaCompleta<<endl;

    for(int i=0; i<n; i++){
        // Triangulo completo
        if((i == n-1) || (e[i] + h < e[i+1]))
            answer += areaCompleta;
 
        // Precisamos calcular a área da fórmula geométrica
        else{
            answer += ((e[i+1] - e[i]) / (tan(ang * pi/180))) * (e[i+1] - e[i]) + ((d - 2*( (e[i+1] - e[i]) / (tan(ang * pi/180)))) * (e[i+1] - e[i]));
        }
    }

    cout<<fixed<<setprecision(7)<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}