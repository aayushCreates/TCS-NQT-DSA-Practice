// -----------------------------    Sort 0s, 1s and 2s (Dutch Flag)     ----------------------------------------

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortZeroOneTwo(vector<int>& arr, int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            mid++; low++;
        }else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
}


int main() {
    vector<int> arr = {2,0,1,2,1,0,1,2,0};
    
    sortZeroOneTwo(arr, arr.size());

    for (int x : arr) cout << x << " ";
    cout << endl;


    return 0;
}