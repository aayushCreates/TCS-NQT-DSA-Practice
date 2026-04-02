//  ------------------------------  Check if two strings are rotation of each other  --------------------------

#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

//  MAP METHOD
bool checkIsStringsRotated(string& str1, string& str2) {
    int m = str1.length();
    int n = str2.length();

    map<char, int>charsCounting;

    for(int i = 0; i < m; i++) {
        charsCounting[str1[i]]++;
    }

    for(int i = 0; i < n; i++) {
        charsCounting[str2[i]]--;
    }

    for(auto c: charsCounting) {
        if(c.second != 0) return false;
    }

    return true;
}

//  str2 is rotation of str1 iff str2 is a substring of str1 + str1
bool actualSolution(string& str1, string& str2) {
    if(str1.length() != str2.length()) return false;
    string temp = str1 + str1;

    return temp.find(str2) != string::npos;     //  special constant representing “not found”
}

int main() {
    string str1 = "ABCD";
    string str2 = "CDAB";

    cout << actualSolution(str1, str2) << endl; 

    return 0;
}