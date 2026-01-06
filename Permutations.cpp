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

    int n;
    cin >> n;

    vector<int> a;

    for (int i = 2; i <= n; i = i + 2)
    {
        a.push_back(i);
    }

    for (int i = 1; i <= n; i = i + 2)
    {
        a.push_back(i);
    }

    bool flag = true;
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        if (i + 1 < size && abs(a[i] - a[i + 1]) == 1)
        {
            flag = false;
            cout << "NO SOLUTION";
            break;
        }
    }

    if (flag)
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}