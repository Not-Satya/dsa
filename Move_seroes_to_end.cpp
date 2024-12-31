// Given an arary, move all the zeroes to the end of the array
#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int>& arr) {
    int j = 0, n = arr.size();

    for (int i = 0; i<n; i++) {
        if (arr[i] == 0) continue;
        arr[j] = arr[i];
        j++;
    }
    for (j; j<n; j++) arr[j] = 0;
    return;
}

int main() {
    vector<int> arr = {1, 0, 5, 4, 0, 0, 3, 0, 7};

    cout<<"The array after removing all zeroes to the end is: "<<endl;
    cout<<"[";
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i];
        if (i < n) cout<<", ";
    }
    cout<<"]"<<endl;
    return 0;
}
