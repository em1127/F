#include <bits/stdc++.h>

using namespace std;

const int N = 1e3+10;
int arr[N], pf[N];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        pf[i] = pf[i-1] + arr[i];
    }
    for (int i = 1; i <= n; ++i) cout << pf[i] << " ";
}
