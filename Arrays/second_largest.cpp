// -----------------------------------    Find Second Largest Element in Array    -------------------------------

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findSecondLargest(vector<int>& arr, int n) {
    int firstLargest = INT32_MIN;
    int secondLargest = INT32_MIN;
       
    for(int i = 0; i < n; i++) {
        if(arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }else if(arr[i] > secondLargest && arr[i] < firstLargest) {
            secondLargest = max(arr[i], secondLargest);
        }else {
            continue;
        }
    }

    if(secondLargest == INT32_MIN) return -1;

    return secondLargest;
}

int main() {
    vector<int>arr = {};
    int n = arr.size();

    return 0;
}