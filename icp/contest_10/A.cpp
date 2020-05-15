#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;

    cin >> n;

    for(int i=1;i<n+1;i++){
        if(i>1){
            cout<<"that ";
        }
        if(i%2==0){
            cout<<"I love ";
        }
        else{
            cout<<"I hate ";
        }
    }

    cout << "it" << endl;

    return 0;
}