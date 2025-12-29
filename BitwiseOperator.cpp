#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool checkKthBit(int a, int k)
{
    return (a >> k) & 1;
}

void printOnAndOffBits(int n)
{
    for (int i = 0; i <= 7; i++)
    {
        if (checkKthBit(n, i))
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}

int turnOnKthBit(int n, int k)
{
    return (1 << k) | n;
}

int turnOffKthBit(int n, int k)
{
    return ~(1 << k) & n;
}

int toggleKthBit(int n, int k)
{
    return (1 << k) ^ n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int a = 5, b = 19;
    // int ans = (a ^ b);
    // cout << ans;

    // int ans = (1 << 3);
    // cout << ans;

    // cout << checkKthBit(45, 2);
    // printOnAndOffBits(45);
    // cout << turnOnKthBit(45, 4);
    // cout << turnOffKthBit(45, 3);
    cout << toggleKthBit(45, 4);

    return 0;
}