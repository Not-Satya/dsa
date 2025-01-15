// given a string, check if it is palindrome or not

#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string& str) {
    int st = 0, end = str.length()-1;

    while (st < end) {
        if (str[st++] != st[end--]) return false;
    }
    return true;
}

int main() {
    string str = "racecar";
    if (isPalindrome(str)) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}
