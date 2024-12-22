#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> freq = {{'R', 0}, {'L', 0}, {'U', 0}, {'D', 0}};
    string e;

    cin>>e;

    if(e.size() % 2 == 1){
        cout<<-1<<endl;
        return 0;
    }

    for(unsigned int i=0; i<e.size(); i++)
        freq[e[i]]++;

    int ans = (abs(freq['R'] - freq['L']) + abs(freq['U'] - freq['D'])) / 2;
    cout<<ans<<endl;
    return 0;
}