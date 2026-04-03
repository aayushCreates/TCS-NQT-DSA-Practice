//  ---------------------    Max Subarray SUM + SubARRAY     ----------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

pair<int, vector<int>> kadanes(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    int start = 0, end = 0, tempStart = 0;

    for (int i = 1; i < nums.size(); i++) {

        // Decision: start fresh or extend?
        if (nums[i] > currentSum + nums[i]) {
            currentSum = nums[i];
            tempStart = i;
        } else {
            currentSum += nums[i];
        }

        // Update max if better sum found
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
    }

    vector<int> subarray(nums.begin() + start, nums.begin() + end + 1);
    return {maxSum, subarray};
}

void printResult(vector<int>& nums) {
    pair<int, vector<int>> result = kadanes(nums);
    int maxSum = result.first;
    vector<int> subarray = result.second;

    cout << "Input:    ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    cout << "Max Sum:  " << maxSum << endl;

    cout << "Subarray: ";
    for (int x : subarray) cout << x << " ";
    cout << "\n" << endl;
}

int main() {
    // 1. Mixed positive and negative
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printResult(nums1);

    // 2. All negative
    vector<int> nums2 = {-3, -1, -4, -2, -5};
    printResult(nums2);

    // 3. All positive
    vector<int> nums3 = {1, 2, 3, 4, 5};
    printResult(nums3);

    // 4. Single element
    vector<int> nums4 = {-7};
    printResult(nums4);

    return 0;
}