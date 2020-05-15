#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s,t;

    cin >> s >> t;


    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    // cout << t.size()+1 << " "<<s.size()<<endl;

    if(s.size()+1==t.size()){
        cout << "Yes"<<endl;
    } else{
        cout << "No" <<endl;
    }

    return 0;
}