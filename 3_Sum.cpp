/*

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr) {
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            
            if (sum == 0) {
                result.push_back({arr[i], arr[left], arr[right]});
                
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
                
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return result;
}

void printVec(const vector<vector<int>>& arr) {
    for (const auto& triplet : arr) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
}

int main() {
    vector<int> arr = {-1, -1, 2, 0, 1};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);

    printVec(ans);
    return 0;
}
