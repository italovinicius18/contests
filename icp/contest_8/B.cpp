#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    unsigned long long int ans=0;

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(int i = 1;i<n;i++){
        // cout<< v[i]-v[i-1]-1<< endl;
        ans+=v[i]-v[i-1]-1;
    }

    cout << ans << endl;

    return 0;
}