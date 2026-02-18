#include <bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s, p, q;
        cin >> n >> s;
        cin >> m >> p >> q;
        string v, d;
        for (int i = 0; i < q.size(); i++)
        {

            if (q[i] == 'D')
            {
                d.push_back(p[i]);
            }
            else
            {
                v.insert(v.begin(), p[i]);
            }
        }
        cout << v + s + d << endl;
    }
    return 0;
}