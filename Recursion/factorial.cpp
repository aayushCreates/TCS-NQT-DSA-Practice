// -----------------------------    Factorial using Recursion + DP   --------------------------------

#include<iostream>
#include<vector>

using namespace std;

int getFactorial(int n, vector<int>& dp) {
    if(n == 0 || n == 1) {
        return 1;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    dp[n] = n * getFactorial(n - 1, dp);

    return dp[n];
}

int main() {
    int n;
    cout<<"Enter the Value: ";
    cin>>n;

    vector<int>dp(n+1, -1);

    cout<<"Factorial of "<<n<<" is: "<<getFactorial(n, dp);

    return 0;
}