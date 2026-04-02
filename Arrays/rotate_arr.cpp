//   -----------------       Rotate ARRAY Problem      --------------------------

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// BRUTE FORCE - EXTRA SPACE
void kRotationOfArray(vector<int>& arr, int n, int k) {
    vector<int> ans;

    k = k % n;      //  handle case if k > n
    
    for(int i = k; i < n; i++) {
        ans.push_back(arr[i]);
    }

    for(int i = 0; i < k; i++) {
        ans.push_back(arr[i]);
    }    

}


//  Without Extra Space - REVERSE METHOD
void kRotation(vector<int>& arr, int n, int k) {
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

//  RIGHT ROTATION - REVERSE METHOD
void rightRotation(vector<int>& arr, int n, int k) {
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}


int main() {
    vector<int>arr = {7,1,5,3,6,4};
    int n = arr.size();

    return 0;
}