//   -----------------       Move Zeros    --------------------------

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void moveZeros(vector<int>& arr, int n) {
    int j = 0;

    for(int i = 0;  i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

}

int main() {
    vector<int>arr = {};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    moveZeros(arr, n);


    return 0;
}