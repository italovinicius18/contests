#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b, c, k, ans = 0;

    cin >> a >> b >> c >> k;

    vector<unsigned long long int> ac;

    ac.push_back(a);
    ac.push_back(a + b);
    ac.push_back(a + b + c);

    if (k <= ac[0])
    {
        ans+=k;
    }
    else if (k > ac[0] and k <= ac[1])
    {
        ans+=a;
    }
    else if (k > ac[1] and k <= ac[2])
    {
        ans+=a;
        k-=(b+a);
        ans-=k;
    }

    cout << ans << endl;
    return 0;
}