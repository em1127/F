#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int key){
    int l = 0;
    int r = n - 1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
        }
        return -1;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, key;
  cin >> n >> key;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << binarySearch(arr, n, key) << endl;
}

