#include <bits/stdc++.h>

using namespace std;

int main() {

  vector<int> v = {1, 2, 3, 5, 6, 9};
  // sort(v.begin(), v.end());
  // reverse(v.begin(), v.end());
  // sort(v.begin(), v.end());
  // sort(v.rbegin(), v.rend());
  // cout << *max_element(v.begin(), v.end()) << "\n";
  // cout << *min_element(v.begin(), v.end()) << "\n";
  // bool ok = is_sorted(v.begin(), v.end());

  // bool ok = binary_search(v.begin(), v.end(), 5);
  // cout << (ok ? "YES" : "NO") << "\n";
  
  // auto it = lower_bound(v.begin(), v.end(), 4);
  // it--;
  // cout << *it << endl;
  // int z = (it-v.begin());
  // cout << z << endl;

  auto itt = upper_bound(v.begin(), v.end(), 5);
  cout << ((itt == v.end()) ? "Not found" : to_string(*itt)) << endl;
  cout << (itt-v.begin());
}
