#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int a,b,n,p1=0,p2=0;
    cin >> n;

    while(n--){
        cin >> a >>b;
        if (a>b)
            p1++;
        if (b>a)
            p2++;
    }

    // cout << p1 << " -- " << p2<<endl;

    if (p1>p2)
        cout << "Mishka" << endl;
    else if (p1<p2)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
    return 0;
}