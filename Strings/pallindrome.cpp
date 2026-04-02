// -----------------------------------    Check Pallindrome in String    -------------------------------

#include<iostream>

using namespace std;

bool checkPallindrom(string& str) {
    int n = str.length();

    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n - i - 1]) return false;
    }
    
    return true;
}

int main() {
    string str = "CAR";

    cout<<"Is "<<str<<" Pallindrome: "<<checkPallindrom(str);

    return 0;
}