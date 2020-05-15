#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    set<char> d;
    cin >> s;
    // cout <<s<<endl;
    for(auto e:s){
        d.insert(e);
    }

    if(d.size()==2){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}