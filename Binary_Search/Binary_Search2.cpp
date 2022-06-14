#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, key;
    cin >> n >> key;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while(r - l > 1)
    {
        int mid = l + (r - l)/2;
        if(arr[mid] < key) l = mid + 1;
        else r = mid;
    }

    if(arr[l] == key)cout << l;
    else if(arr[r] == key) cout << r;
    else cout << -1;
}

