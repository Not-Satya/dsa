/*
Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
  
Examples:
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3
Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

Input: prices = {1, 0, 1, 1, 0, 1} 
Output: 2
Explanation: There are two consecutive 1's in the array. 
*/

#include <iostream>
#include <vector>
using namespace std;

int maximumOnes(vector<int>& arr, int& index) {
    int n = arr.size(), max = -1, curr = 0, stIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            curr++;
            if (curr == 1) stIndex = i;
            if (curr > max) {
                max = curr;
                index = stIndex;
            }
        } else {
            curr = 0;
        }
    }
    return max;
}

void th(int n) {
    if (n > 10 && n < 20) {
        cout << "th";
    } else {
        switch (n % 10) {
            case 1: cout << "st"; break;
            case 2: cout << "nd"; break;
            case 3: cout << "rd"; break;
            default: cout << "th"; break;
        }
    }
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1};
    int posn;
    int ans = maximumOnes(arr, posn);

    cout << "The maximum number of consecutive 1s in this array is: " << ans << " at " << posn;
    th(posn);
    cout << " position from 0." << endl;
    return 0;
}
