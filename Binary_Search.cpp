// Given a sorted array of intigers, return the smallest position of k in 1 based indexing
/* 
Examples: 
  Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]. 6
  Output: 6

  Input: [2, 3, 4, 4, 4, 5, 7, 9], 4
  Output: 3
  
Constraints:
  1 <= arr.size() <= 10^5
  1 <= arr[i] <= 10^6
  1 <= k <= 10^6
*/

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int& k) {
    int low = 0, high = arr.size();
    int result = -1;

    while (low <= high) {
        int mid = low + (high -low)/2;  // find teh middle most element

        if (arr[mid] == k) {
            result = mid; // set results to mid
            high = mid - 1; // continues the search for smallest index in teh left half
        }
        if (arr[mid] > k) high = mid -1; // search in the left half
        else low = mid +1; // search in the right half
    }
    return result;
}

int main() {
    vector<int> arr = {4, 5, 6, 8, 10};
    int k = 8;
    int ans = BinarySearch(arr,k);

    if (ans != -1) {
        ans++;
        cout<<k<<" is present at the "<<ans;
        if (k > 10 && k < 20) {
            cout<<"th ";
        }
        else {
            switch (ans%10) {
                case 1: {
                    cout<<"st "; 
                    break;
                }
                case 2: {
                    cout<<"nd "; 
                    break;
                }
                case 3: {
                    cout<<"rd "; 
                    break;
                }
                default: {
                    cout<<"th "; 
                    break;
                }
            }
        }
        cout<<"position in this array."<<endl;
    }
    else {
        cout<<k<<" Is not present in this array."<<endl;
    }
    return 0;
}
