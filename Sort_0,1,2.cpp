// Given an arary of 0s, 1s ,and 2s... sort the array in ascending order

#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

void Print(const vector<int>& arr) {
    cout<<"[";
    for (auto num : arr) {
        cout<<num<<"  ";
    }
    cout<<"]"<<endl;
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2};

    sort012(arr);

    Print(arr);
    return 0;
}
