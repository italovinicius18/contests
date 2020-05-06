#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n,k,d,aux;

    cin >> n >> k;

    vector<int> v(n);

    for (int i=0;i<k;i++){
        cin >> d;
        for (int j=0;j<d;j++){
            cin >> aux;
            v[aux-1]++;
        }
    }

    cout << count (v.begin(), v.end(), 0) << endl;

    return 0;
}