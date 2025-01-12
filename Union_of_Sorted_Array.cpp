/*
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. 
The final array should be sorted in ascending order.

Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

Example: 
Input: ‘n’ = 5, ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n = a.size(), m = b.size();
    int i = 0, j = 0, last = -1e9;
    vector<int> ans;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            if (last != a[i]) {
                ans.push_back(a[i]);
                last = a[i];
            }
            i++;
        } else {
            if (last != b[j]) {
                ans.push_back(b[j]);
                last = b[j];
            }
            j++;
        }
    }

    while (i < n) {
        if (last != a[i]) {
            ans.push_back(a[i]);
            last = a[i];
        }
        i++;
    }

    while (j < m) {
        if (last != b[j]) {
            ans.push_back(b[j]);
            last = b[j];
        }
        j++;
    }

    return ans;
}

void printVec(const vector<int>& arr) {
    int n = arr.size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 4, 4, 6, 7};

    vector<int> Union = sortedArray(arr1, arr2);

    cout << "The union of the given arrays is:" << endl;
    printVec(Union);

    return 0;
}
