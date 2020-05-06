#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string s,aux="";
    cin >> s;
    unsigned long long int aux_conv;
    int ans = 0;

    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            aux+=s[j];
            aux_conv = stoi(aux);
            cout << aux << endl;
            if(aux_conv%2019==0){
                aux = "";
                ans++;
                break;
            }
        }
        aux = "";
    }

    cout << ans << endl;

    return 0;
}
