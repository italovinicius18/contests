#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,x,custo_final=0;

    cin >> n >> m >> x;

    set<pair<int,pair<int,vector<int>>>> ca;

    for(int i=0;i<n;i++){
        int c,a,soma=0;
        vector<int> tmp;
        cin >> c;
        for(int j=0;j<m;j++){
            cin >> a;
            soma+=a;
            tmp.push_back(a);
        }
        pair<int,vector<int>> ii;
        ii.first = c;
        ii.second = tmp;
        pair<int,pair<int,vector<int>>> aux;
        aux.first = soma;
        aux.second = ii;
        ca.insert(aux);
    }

    set<int>::reverse_iterator rit; 

    for (rit = ca.rbegin(); rit != ca.rend(); rit++) 
        cout << *rit << " ";

    cout << custo_final << endl;

    return 0;
}