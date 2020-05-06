#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    string temp;
    cin >> n;
    set<string> s;

    while(n--){
        cin >> temp;
        s.insert(temp);
    }

    cout << s.size()<<endl;

    return 0;
}
