#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

const int maxN = (1 << 15);

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }

    return true;
}

vector<int> allPalindrome;

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    markPalindrome();
    int size = allPalindrome.size();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), cnt(maxN + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

        long long ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int curr = (v[i] ^ allPalindrome[j]);
                ans += cnt[curr];
            }
        }

        cout << ans / 2 << '\n';
    }

    return 0;
}