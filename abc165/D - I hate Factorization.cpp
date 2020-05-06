#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int x,i;

    cin >> x;

    for (i=0;;i++){
        if(i*i*i*i*i+1==x){
            break;
        }
    }

    cout << i << " "<< -1<<endl;

    return 0;
}