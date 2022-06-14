#include <bits/stdc++.h>
  
using namespace std;
 
const int N = 1e6+10;
 
int n;
 
long long m;
long long trees[N];
 
bool ispossible(int h){
 
    long long wood = 0;
 
    for (int i = 0; i < n; ++i)
    {
        if(trees[i] >= h){
            wood+=(trees[i] - h);
        }
    }
    return wood >= m;
 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> trees[i];
    }
    long long l = 0, r = 1e9, mid;
 
    while(r - l > 1){
        mid = (r + l)/2;
        
        if(ispossible(mid)){
            l = mid;
        }else{
            r = mid - 1;
        }
    }
    if(ispossible(r))cout << r << "\n";
    else cout << l << "\n"; 
}
