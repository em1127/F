#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, x, y;
  cin >> n;
  vector<pair<int,int> > pr(n), prr;
  for (int i = 0; i < n; ++i) cin >> pr[i].first >> pr[i].second;

  for (int i = 0; i < n; ++i)
  {
      cin >> x >> y;
      prr.push_back(make_pair(x, y));
  }
  for (auto ele : pr) cout << ele.first << " " << ele.second << "\n";
  for (auto ele : prr) cout << ele.first << " " << ele.second << "\n";
}
