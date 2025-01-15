// Given s string, return the reversed string

#include <iostream>
#include <string>
using namespace std;

void reverse(string& str) {
    int st = 0, end = str.length()-1;

    while (st < end) {
        swap(str[st++], str[end--]);
    }
}

int main() {
    string str = "Hello World";
    reverse(str);

    for(const ch : str) cout<<ch;
    cout<<endl;
    return 0;
}
