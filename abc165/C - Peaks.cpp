#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n,m,a,b,ans=0;

    cin >> n >> m;

    vector <int> h(n),freq(n);

    for (int i=0;i<n;i++){
        cin >> h[i];
        freq[i] = 1;
    }

    for (int i=0;i<m;i++){
        cin >> a >> b;
        if (h[a-1]<=h[b-1]){
                freq[a-1] = 0;
        }
        if(h[b-1]<=h[a-1]){
                freq[b-1] = 0;
        }
    }


    cout << count(freq.begin(),freq.end(),1) << endl;


    return 0;
}