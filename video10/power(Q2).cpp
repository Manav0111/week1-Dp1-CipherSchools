#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
         if (n == 0) return 1;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    double res = 1;
    while (n) {
        if (n & 1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
    }
};