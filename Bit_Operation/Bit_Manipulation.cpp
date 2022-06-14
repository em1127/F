#include <bits/stdc++.h>

using namespace std;

string printBinary(int n)
{
    if (n == 0)
        return "0";

    string bin = "";
    while (n > 0)
    {
        bin = ((n & 1) == 0 ? '0' : '1') + bin;
        n >>= 1;
    }
    return bin;
}

int main()
{
    int n = 38;
    cout << "Main: " << printBinary(n) << "\n";
    int a = 38;
    int i = 3;
    if(a & (1 << i))cout << "Set" << "\n";
    else cout << "Unset Bit" << "\n";
    cout << printBinary(a | (1 << 3)) << "\n";//3rd bit now set
    cout << printBinary(a & ~(1 << 1)) << "\n";//1st bit now unset
    cout << printBinary(a ^ (1 << 4)) << "\n";//Toggle
    cout << "Set_bit Count: " << __builtin_popcount(INT_MAX) << "\n";
    cout << "Set_bit Count: " << __builtin_popcountll((1LL << 35) - 1) << "\n";
}

