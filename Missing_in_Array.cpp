/*
You are given an array arr of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). 
This array represents a permutation of the integers from 1 to n with one element missing. 
Your task is to identify and return the missing element.

Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 5 are present except 4.
*/

#include <iostream>
#include <vector>
using namespace std;

int missinginArray(vector<int>& arr) {
    int n = arr.size()+1;
    long long sum = 0, targetSum = static_cast<long long>(n)*(n+1)/2;

    // We know that the sum of n consecutive whole numbers is equal to n(n+1)/2
    // now if we subtract the cum of elemnts in array from the target sum which is n(n+1)/2 then we get thenumber that is missing

    for (int num : arr) {
        sum += num;
    }
    return static_cast<int>(targetSum - sum);
}

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    int ans = missinginArray(arr);

    cout<<"The missing number is: "<<ans<<endl;
    return 0;
}
