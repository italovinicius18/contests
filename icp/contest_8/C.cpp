#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n,ans = 0;
    cin >> n;
    vector<pair<int,int>> vp(n);

    for(int i=0;i<n;i++){
        cin >> vp[i].first >> vp[i].second;
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){ // N le jogos q já aconteceram
            if (vp[i].first == vp[j].second){
                ans += 1;
            }
            if (vp[i].second == vp[j].first){
                ans += 1;
            }
        }
    }

    cout << ans <<endl;

    return 0;
}