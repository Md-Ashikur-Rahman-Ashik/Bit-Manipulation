#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> b(n - 1);
        for (auto &it : b)
            cin >> it;

        vector<long long> a(n);
        a[0] = b[0];
        a[n - 1] = b[n - 2];

        for (long long j = 1; j < n - 1; j++)
        {
            a[j] = b[j] | b[j - 1];
        }

        bool flag = true;
        for (long long j = 0; j + 1 < n; j++)
        {
            if (b[j] != (a[j] & a[j + 1]))
            {
                flag = false;
            }
        }

        if (!flag)
        {
            cout << -1 << '\n';
            continue;
        }

        for (long long j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }

        cout << '\n';
    }

    return 0;
}