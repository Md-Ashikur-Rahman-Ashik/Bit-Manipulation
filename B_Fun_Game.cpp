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

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string t;
        cin >> t;

        if (s == t || s[0] == '1')
        {
            cout << "YES\n";
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos == -1)
        {
            cout << "NO\n";
        }
        else
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (pos > i)
                    {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}