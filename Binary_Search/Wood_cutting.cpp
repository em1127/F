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
 
int binarysearch(long long int l, long long int r){
        long long int ans = -1;
        while(r >= l){
        long long int mid = l + (r - l)/2;
        if(ispossible(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }return ans;    
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
    cout << binarysearch(0, 1e9);
}
