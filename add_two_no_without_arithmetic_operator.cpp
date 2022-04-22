#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int sum(int a, int b)
{
    while (b != 0)
    {
        unsigned carry = (a & b);

        a = (a ^ b);
        b = carry << 1;
    }

    return a;
}

// Also valid according to given question

// int sum(int a, int b)
// {
//     if (a == b)
//         return 2 * a;
//     else
//         return (a * 1LL * a - b * 1LL * b) / (a - b);
// }