#include <bits/stdc++.h>
using namespace std;

#define INF 9999999
int answer[1000010];

int solve(int n){
    if(n == 0) return 0;
    if(answer[n]) return answer[n];

    int menor = INF;
    string nString = to_string(n);
    for(char c : nString){
        if(c == '0') continue;
        int cInt = c - '0';
        menor = min(menor, solve(n - cInt) + 1);
        answer[n] = menor;
    }

    return menor;
}

int main(){
    int n;
    cin>>n;

    cout<<solve(n)<<endl;

    return 0;
}