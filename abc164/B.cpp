#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    while(1){
        c-=b;

        if(c<=0){
            cout << "Yes" << endl;
            return 0;
        }
        a-=d;
        if(a<=0){
            cout << "No" << endl;
            return 0;
        }
    }
}
