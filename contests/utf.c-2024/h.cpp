#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((x1*y2 + y1*x3 + x2*y3) == (y2*x3 + y3*x1 + x2*y1)) cout<<"Temos que pousar\n";
    else cout<<"Era um desenho comum\n";
    return 0;
}