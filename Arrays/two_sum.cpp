#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isTwoSumExists(vector<int>& arr, int& target, int n) {
    
    int left = 0;
    int right = n - 1;

    while(left < right) {
        if(arr[left] + arr[right] == target) {

            return true;
        }else if(arr[left] + arr[right] > target) {
            
            right--;
        
        }else {
            left++;
        }
    }

    return false;
}


int main() {
    int target;
    cout<<"Enter the target Element: ";
    cin>>target;

    vector<int>arr = {};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    cout<<"IS Two Sum Present:"<<isTwoSumExists(arr, target, n);


    return 0;
}