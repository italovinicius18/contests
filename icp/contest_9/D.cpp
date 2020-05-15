#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)     // Maior divisor comum de a e b
{
    return a ? gcd(b, a % b) : b;
}

long long binom(long long n, long long p)
{
    if (n < p)
        return 0;

    auto m = min(p, n - p);
    auto M = min(p, n - p);

    vector<long long> num;

    for (long long i = n; i > M; ++i)       // Cancelamos pelo maior valor possível
        num.push_back(i);

    vector<long long> den;                  

    for (long long i = 2; i <= m; ++i)       // Fica o denominador o menor valor possível
        den.push_back(i);

    for (auto y : den)
    {
        for (int i = num.size() - 1; i >= 0; --i)
        {
            auto d = gcd(y, num[i]);
            
            y /= d;                         
            num[i] /= d;                    // Cancelamento possível
            
            if (y == 1)
                break;
        }

        while (not num.empty() and num.back() == 1)
            num.pop_back();                             // Remova os 1's que não contribuem para a resposta 
    }

    long long res = 1;

    for (auto x : num)
        res *= x;

    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    long long int n,k;

    cin >> n >> k;

    cout << binom(n,k)<< endl;

    return 0;
}