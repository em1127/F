#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<int> s = {3, 2, 1, 5, 1, 2};
    s.insert(7);
    cout << s.size() << '\n';//Size 5
    s.erase(s.find(7));//7 removed
    cout << s.size() << '\n';//Size 4
    auto it = s.end();
    it--;
    s.erase(it);
    cout << s.size() << '\n';//Size 3

    auto itt = s.find(2);
    cout << ((itt == s.end()) ? "NO" : "YES") << '\n';
}