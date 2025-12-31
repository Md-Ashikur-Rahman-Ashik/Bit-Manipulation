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
        int n;
        cin >> n;

        if (n <= 2)
        {
            cout << 1 << '\n';
        }
        else
        {
            int k = floor(log2(n));
            int no = pow(2, k);

            int c = pow(2, k - 1);

            cout << max(n - no + 1, no - c) << '\n';
        }
    }

    return 0;
}