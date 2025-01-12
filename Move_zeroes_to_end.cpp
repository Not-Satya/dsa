// given an array of integers, move all the zeroes to the end of the array
// and move all the non zero elements to the front maintaining their order

#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int>& arr) {
    int j = 0, n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    for (; j < n; j++) arr[j] = 0;
}

int main() {
    vector<int> arr = {1, 0, 5, 4, 0, 0, 3, 0, 7};

    moveZeroesToEnd(arr);

    cout << "The array after moving all zeroes to the end is: " << endl;
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}

