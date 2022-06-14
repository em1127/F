#include <bits/stdc++.h>

using namespace std;

const int N = 1e3+10;
int arr[N][N], pf[N][N];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> arr[i][j];
            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j-1] -pf[i-1][j-1];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j) cout << pf[i][j] << " ";
        cout << "\n";
    }
}
