#include <bits/stdc++.h>

using namespace std;

void divisor(int a){
    for (int i = 1; i <= sqrt(a); ++i)
    {
        if(a % i == 0){
        if(a / i == i){
            cout << " " << i << "\n";
        }else{
            cout << i << " " << a/i << "\n";
        }
    }
    }cout << "\n" ;
}

int main()
{
    int TT, x;
    cin >> TT;
    while(TT--) {
        cin >> x;
        divisor(x);
    }
}
