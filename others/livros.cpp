// Abordagem de Line Sweep

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> books;

int solve(int n){
    sort(books.begin(), books.end());
    int temp=0, answer=0;
    for(int i=0; i<2*n; i++){
        temp += books[i].second;
        answer = max(answer, temp);
    }
    return answer;
}

int main(){
    int n, x, y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        books.push_back({x, 1});
        books.push_back({x+y, -1});
    }
    cout<<solve(n)<<endl;
    return 0;
}