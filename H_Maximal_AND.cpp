#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int B = 30;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v(a);

        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        vector<int> bits(B + 1);

        for (int i = 0; i < a; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if ((v[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }

        int ans = 0;
        for (int i = B; i >= 0; i--)
        {
            if (bits[i] == a)
            {
                ans += (1LL << i);
            }
            else
            {
                int need = a - bits[i];
                if (b >= need)
                {
                    ans += (1LL << i);
                    b -= need;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}