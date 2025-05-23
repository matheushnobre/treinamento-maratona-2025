#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int>&a, vector<int>& b){
    return a.size() < b.size();
}

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    map<int, int> freq;

    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i] %= 5;
        freq[a[i]]++;
    }

    vector<vector<int>> pa;

    for(int i=0; i<5; i++){
        int sum = i;
        if(i == 0) pa.push_back({i});

        for(int j=0; j<5; j++){
            sum = i + j; 
            if(sum % 5 == 0) pa.push_back({i, j});

            for(int k=0; k<5; k++){
                sum = i + j + k;
                if(sum % 5 == 0) pa.push_back({i, j, k});

                for(int l=0; l<5; l++){
                    sum = i + j + k + l;
                    if(sum % 5 == 0) pa.push_back({i, j, k, l});

                    for(int m=0; m<5; m++){
                        sum = i + j + k + l + m;
                        if(sum % 5 == 0) pa.push_back({i, j, k, l, m});
                    }
                }
            }
        }
    }

    int ans = 0;
    sort(pa.begin(), pa.end(), cmp);

    for(vector<int> aux : pa){
        vector<int> cnt(5);
        for(int i : aux){
            cnt[i]++;
        }

        int c = 1;
        while(c == 1){
            for(int i=0; i<5; i++){
                if(cnt[i] > freq[i]) c = 0;
            }

            if(c != 0) {
                ans++;
                for(int i=0; i<5; i++){
                    freq[i] -= cnt[i];
                }
            }  
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}