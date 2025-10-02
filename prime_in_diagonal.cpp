#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int diagonalPrime(vector<vector<int>>& nums) {
    int maxPrime = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (isPrime(nums[i][i])) maxPrime = max(maxPrime, nums[i][i]);
        if (isPrime(nums[i][n-1-i])) maxPrime = max(maxPrime, nums[i][n-1-i]);
    }
    return maxPrime;
}

int main() {
    vector<vector<int>> mat = {{1,2,3},{5,6,7},{9,10,11}};
    cout << diagonalPrime(mat) << endl; // 11
    return 0;
}
