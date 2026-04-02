//   -----------------       Missing Element     --------------------------

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int missingElement(vector<int>& arr, int n) {
       int n = arr.size();

        int sum = 0;
        for(int num : arr) sum += num;

        return (n + 1) * (n + 2) / 2 - sum;
}

int xorMethod(vector<int>& arr, int n) {
    int arrXOR = 0;
    int naturalNumXOR = 0;

    for(int i = 0;  i < n; i++) {
        arrXOR ^= arr[i];
    }

    for(int i = 0;  i <= n + 1; i++) {
        naturalNumXOR ^= i;
    }

    return arrXOR ^ naturalNumXOR;
}

int main() {
    vector<int>arr = {};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    cout<<"Missing Element is: "<<missingElement(arr, n);


    return 0;
}