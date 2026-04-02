//      -----------------------------      Duplicate Element    ------------------------------

#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>
#include<algorithm>

using namespace std;


//  MAP Method
bool isDuplicateElement(vector<int>& arr, int n) {
    map<int, int>eleCount;

    for(int i = 0; i < n; i++) {
        eleCount[arr[i]]++;
    }

    for(auto e: eleCount) {
        if(e.second > 1) return true;
    }

    return false;
}

//  SET Method
bool setMehtod(vector<int>& arr, int n) {
    unordered_set<int> s;

    for(int num : arr) {
        if(s.count(num)) return true;
        s.insert(num);
    }

    return false;
}

//  Sorting Method
bool sortingMethod(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] == arr[i - 1]) return true;
    }

    return false;
}

int main() {
    vector<int>arr = {};
    int n = arr.size();

    cout<<"Is duplicate element exists: "<<isDuplicateElement(arr, n);


    return 0;
}