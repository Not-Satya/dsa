// Given a sorted array of integers, return the smallest position of k in 0 based indexing
/* 
Examples: 
  Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]. 6
  Output: 5

  Input: [2, 3, 4, 4, 4, 5, 7, 9], 4
  Output: 2
  
Constraints:
  1 <= arr.size() <= 10^5
  1 <= arr[i] <= 10^6
  1 <= k <= 10^6
*/

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int& target) {
    int low = 0;
    int high = arr.size()-1;

    
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid+1;
        if (arr[mid] > target) high = mid-1;
    }
    return -1;
}

void arrPrint(const vector<int>& arr) {
    cout<<"[";
    for (auto num : arr) {
        cout<<num<<"  ";
    }
    cout<<"]"<<endl;
}

void thPrint(int& ans) {
    if (ans > 10 && ans < 20) cout<<"th";
    else {
        switch (ans%10) {
            case 1:
                cout<<"st";
                break;
            case 2:
                cout<<"nd";
                break;
            case 3:
                cout<<"rd";
                break;
            default:
                cout<<"th";
                break;
        }
    }
}

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int n = 12;

    arrPrint(arr);

    int ans = BinarySearch(arr, n);

    if (ans == -1) {
        cout<<"The element is not present in the given array."<<endl;
        return 0;
    }
    cout<<n<<" is present at the "<<ans;
    thPrint(ans);
    cout<<" index starting from zero.";
    return 0;
}
