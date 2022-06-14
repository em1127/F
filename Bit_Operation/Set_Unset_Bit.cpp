#include <bits/stdc++.h>

using namespace std;

bool checkSame(int n)//Programme to check if the given number has the same number of set and unset bit
{
    int set = 0, unset = 0;
    while (n) {  
        if (n & 1)
            set++;
        else
            unset++;
        n = n >> 1;
    }
   return set == unset;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 12;
    cout << (checkSame(n) ? "YES" : "NO");
}
