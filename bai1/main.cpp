// C++ program to find GCD of two numbers
// code is updated by himanshug9119 - linkedin URL -
// https://www.linkedin.com/in/himanshug9119/
#include <bits/stdc++.h>
using namespace std;

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

// Driver code
int main()
{
    int a = 160,  b = 7;
    cout << "GCD of " << a << " and " << b << " is "
         << gcd(a, b);
    return 0;
}
