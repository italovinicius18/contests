#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    cout << v[(n/2)] - v[(n/2)-1] <<endl;

    return 0;
}