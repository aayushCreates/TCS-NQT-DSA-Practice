//  ------------------------------------    First Unique Character in a String      -----------------------------

#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

//  MAP METHOD
void findUniqueChar(string& str, vector<char>& uniqueChars) {
    map<char, int>charCounting;
    int n = str.length();
    char ch;

    for(int i = 0; i < n; i++) {
        charCounting[str[i]]++;
    }

    for(auto c: charCounting) {
        if(c.second == 1) {
            uniqueChars.push_back(c.first);
        }
    }
}



int main() {
    string str = "CCXARR";
    vector<char>uniqueChars;

    findUniqueChar(str, uniqueChars);

    cout<<"Unique Character are: "<<endl;
    for(auto uc: uniqueChars) {
        cout<<uc<<" ";
    }
    cout<<endl;

    return 0;
}