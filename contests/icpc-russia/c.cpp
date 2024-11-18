#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t, n;
    ll v;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> val;
        for(int i=0; i<n; i++){
            cin>>v;
            val.push_back(v);
        }
        sort(val.begin(), val.end());

        ll x1=-1000000010, x3=-1000000010, y1=-1000000010, y2=-1000000010;
        int i=1;
        while(i<n){
            if(val[i]==val[i-1]){
                x1=val[i];
                break;
            }
            i++;
        }
        i = i+2;
        while(i<n){
            if(val[i]==val[i-1]){
                y1=val[i];
                break;
            }
            i++;
        }

        int j=n-1;
        while(j>i+1){
            if(val[j]==val[j-1]){
                y2=val[j];
                break;
            }
            j--;
        }
        j-=2;
        while(j>i+1){
            if(val[j]==val[j-1]){
                x3=val[j];
                break;
            }
            j--;
        }

        if(x1!=-1000000010 && x3 != -1000000010 && y1 != -1000000010 && y2 != -1000000010){
            ll x2 = x1, x4 = x3, y3 = y1, y4 = y2;
            cout<<"YES"<<endl;
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        } else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}