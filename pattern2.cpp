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
    int n, m, k, H;
    cin >> n >> m >> k >> H;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
      cin >> heights[i];
    }

    int count = 0, c = 0, h = 0;
    for (int i = 0; i < n; i++)
    {
      int h = abs(H - heights[i]);
      for (int j = 1; j <= m; j++)
      {
        int c = i * j;
      }
      if ((c * k) == h)
      {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}