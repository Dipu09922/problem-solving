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
    int n, s, x, sum = 0;
    cin >> n >> s >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    bool flag = false;

    if (sum > s)
    {
      cout << "NO" << endl;
    }
    else
    {
      while (sum <= s)
      {
        sum = sum + x;
        if(sum==s)
        {
         flag=true;
        }
      }

      // cout << sum << endl;
      if (sum == s || sum - x == s)
      {
        cout << "YES" << endl;
        // cout << sum << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}