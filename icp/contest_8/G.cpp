#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b, c;
 
    cin >> a >> b >> c;
 
    int ans = (b+c-1)*(a+b-1)-b*(b-1);
 
    cout << ans <<endl;

    return 0;
}