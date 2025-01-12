// Return a pari from the sorted array that has the target sum
// Two pointer approach

// [ 1, 2, 3, 4, 5, 6, 7, 8, 9]
//   ^                       ^
// pointer 1            pointer 2

// when the sum > target, we decrement pointer 2 
// [ 1, 2, 3, 4, 5, 6, 7, 8, 9]
//   ^                    ^
// pointer 1           pointer 2

// when sum < target, we increment pointer 1
// [ 1, 2, 3, 4, 5, 6, 7, 8, 9]
//      ^                 ^
//   pointer 1         pointer 2


#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& arr, int& s) {
    int sum = 0;
    int i = 0, j = arr.size()-1;

    vector<int> ans;

    while (i<j) {
        sum = arr[i] + arr[j];
        if (sum < s) i++;
        if (sum > s) j--;
        if (sum == s) {
            ans.push_back(i);
            ans.push_back(j);

            return ans;
        }
    }
    return ans; // return empty if no pair is found
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int targetSum = 9;

    vector<int> ans = pairSum(arr, targetSum);

    cout<<"The pair is "<<arr[ans[0]]<<" and "<<arr[ans[1]]<<endl;
    cout<<"And their indices are: "<<ans[0]<<" and "<<ans[1]<<endl;

    return 0;
}
