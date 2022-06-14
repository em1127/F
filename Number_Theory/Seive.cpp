#include <bits/stdc++.h>

using namespace std;

void seive(int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p <= n; ++p)
    {
        if(prime[p])
            for (int i = p*p; i <= n; i+=p)
                prime[i] = false;
    }

    int cnt = 0;
    for (int i = 2; i <= n; ++i){
        if(prime[i]){
            cnt++;
            cout << i << " ";
        }
    }cout << "\n";
    cout << cnt << "\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    seive(1000);
}