#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    unsigned long long int t1 = v[0], t2 = v[n-1], c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int i = 1, j = n - 2;

    while(true){
        cout << t1 << " "<<i<< " -- " << t2<<" "<<j<<endl;
        if(t1>t2){
            j--;
            t2+=v[j];
            c1++;
        }else{
            i++;
            t1+=v[i];
            c2++;
        }
        if(i==j){
            break;
        }
    }
    cout << t1 << " "<<i<< " -- " << t2<<" "<<j<<endl;
    cout << c1 << " -- " << c2<<endl;

    return 0;
}