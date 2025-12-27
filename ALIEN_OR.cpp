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
        long long int n, k;
        cin >> n >> k;

        set<string> st;

        while (n--)
        {
            string s;
            cin >> s;
            long long int c = 0;
            for (auto x : s)
            {
                c += x == '1';
            }

            if (c == 1)
            {
                st.insert(s);
            }
        }

        long long int size = st.size();

        if (size == k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}