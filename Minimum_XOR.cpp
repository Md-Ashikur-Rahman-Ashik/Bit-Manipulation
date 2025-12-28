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

        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long bits[30] = {0};
        for (long long i = 0; i < n; i++)
        {
            long long ele = arr[i];
            long long p = 0;

            while (ele > 0)
            {
                bits[p] += ele % 2;
                p++;
                ele /= 2;
            }
        }

        long long ans = 0;
        for (long long i = 0; i < 30; i++)
        {
            if (bits[i] % 2 != 0)
            {
                ans += (1 << i);
            }
        }

        for (long long i = 0; i < n; i++)
        {
            long long ele = arr[i];
            long long p = 0;

            while (ele > 0)
            {
                bits[p] -= ele % 2;
                p++;
                ele /= 2;
            }

            long long curr = 0;
            for (long long j = 0; j < 30; j++)
            {
                if (bits[j] % 2 != 0)
                {
                    curr += (1 << j);
                }
            }

            ans = min(ans, curr);

            ele = arr[i];
            p = 0;

            while (ele > 0)
            {
                bits[p] += ele % 2;
                p++;
                ele /= 2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
