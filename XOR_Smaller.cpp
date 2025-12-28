#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long cur = v[0];
        for (long long i = 0; i < n; i++)
        {
            cur &= v[i];
        }

        long long ans = 0;
        long long maxi = 1LL << 31;

        for (long long i = 1; i <= maxi; i *= 2)
        {
            if (cur & i)
                ans += i;
        }

        cout << ans << '\n';
    }

    return 0;
}
