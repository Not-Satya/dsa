// Given a sorted array arr. Return the size of the modified array which contains only distinct elements.
// Don't use set or HashMap to solve the problem.
// You must return the modified array size only where distinct elements are present and modify the original array such that all the distinct elements come at the beginning of the original array.

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    int j = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[j]) [
            j++;
        }
        arr[j] = arr[i];
    }
    return j+1;
} 

int main() {
    vector<int> arr = {2, 2, 2, 3, 3, 4, 4, 5};
    int size = removeDuplicates(arr);

    cout<<"The size of the truncated array is: "<<size<<endl;
    cout<<"And the array is: "<<endl;
    cout<<"[";
    for (int i = 0; i < size; i++) {
        cout<<arr[i];
        if (i != size-1) cout<<", ";
    }
    cout<<"]"<<endl;
}
