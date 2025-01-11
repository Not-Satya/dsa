/*
Given an array arr[] containing only non-negative integers, your task is to find a continuous 
subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 
1-based indices of the leftmost and rightmost elements of this subarray. 
You need to find the first subarray whose sum is equal to the target.
Note: If no such array is possible then, return [-1]. 

Example:
Input: arr[] = [1, 2, 3, 7, 5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th index is 12
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the target subarray sum
vector<int> subarraySum(vector<int>& arr, int& target) {
    int n = arr.size();
    int sum = 0, p1 = 0;    // a pointing variable that keeps track of the sum

    for (int i=0; i<n; i++) {
        sum += arr[i];

        // Adjusting the subarray sum if sum exceeds target
        while (sum > target) {
            sum -= arr[p1];
            p1++;          
        }
        if (sum == target) return {p1+1, i+1};
    }
    return {-1};
}

// function to print vectors
void printVec(vector<int>& arr) {
    int n = arr.size();
    cout<<"[";
    for (int i=0; i<n; i++) {
        cout<<arr[i];
        if (i != n-1) cout<<", ";
    }
    cout<<"]"<<endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 12;

    vector<int> ans = subarraySum(arr, target);

    if (ans[0] == -1) cout<<"There isn't a subarray that has a sum of "<<target<<endl;
    else printVec(ans);

    return 0;
}
