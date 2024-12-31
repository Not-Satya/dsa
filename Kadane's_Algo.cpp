// A Demonstration of Kadane's Algorithm for finding out the maximum subarray sum of a given array in O(n) Time.

#include <iostream>
#include <vector>
using namespace std;

int maximumSubarraySum(vector<int>& arr) {
    int currSum = 0, maxSum = INT_MIN;
    for (int num : arr) {
        currSum += num;
        maxSum = max(maxSum, currSum);
        currSum = (currSum < 0) ? 0 : currSum;    // Resetting the current sum to 0, on adding up a large negative element
    }
  return maxSum;
}

int main() {
    vector<int> arr = {1, 4, -2, 3, -5, 4, 6};
    int ans = maximumSubarraySum(arr);

    cout<<"The Maximum Subarray sum is: "<<ans<<endl;
    return 0;
}
