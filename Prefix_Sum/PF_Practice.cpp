#include <bits/stdc++.h>

using namespace std;

const int N = 1e3+10;
int arr[N][N], pf[N][N];


int main(){
    int n, a, b, c, d;
    cin >> n;
    cin >> a >> b >> c >> d;//Find the total sum of the rectangle represented by(a, b) as the top left point and (b, c) as the bottom right point;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> arr[i][j];
            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j-1] -pf[i-1][j-1];
        }
    }
    cout << pf[c][d] - pf[a- 1][d] - pf[c][b-1] + pf[a- 1][b-1];
}
