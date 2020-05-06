#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;
    set<char> s;

    while(cin>>c){
        if (isalpha(c)){
            s.insert(c);
        }
    }

    cout<<s.size()<<endl;
    

    return 0;
}