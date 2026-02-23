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
 
      while (sum <= s)
      {
        if(sum==s)
        {
         flag=true;
         break;
        }
        sum = sum + x;
      }
      if(flag == true)
      {
       cout<<"YES"<< endl;
      }
      else
      {
        cout << "NO" << endl;
      }
  }
  return 0;
}