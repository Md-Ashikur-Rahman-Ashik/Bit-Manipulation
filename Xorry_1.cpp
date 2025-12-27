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
        int x;
        cin >> x;

        int a = 1;
        int b = 0;
        int count = 0;

        while (a * 2 <= x)
        {
            a = a * 2;
            count++;
        }

        for (int i = count - 1; i >= 0; i--)
        {
            if (x & 1 << i)
            {
                b = b | (1 << i);
            }
        }

        cout << b << " " << a << '\n';
    }

    return 0;
}