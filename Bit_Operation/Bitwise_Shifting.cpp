#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {32,43,54,11,22};
    cout << (53 & 28) << "\n";// Bitwise And
    cout << (53 | 28) << "\n";// Bitwise OR
    cout << (53 ^ 28) << "\n";// Bitwise XOR
    cout << (~5) << "\n";     // Bitwise NOT
    //  9(00001001)  9 << 1   00010010(18)
    cout << (9 << 1) << "\n"; // Left Shift
    //  9(00001001)  9 >> 1   00000100(4)
    cout << (9 >> 1) << "\n"; // Right Shift

    int a = (1 << 31) - 1;
    unsigned int b = (1 << 32) - 1;
}