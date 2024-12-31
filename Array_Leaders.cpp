/*

You are given an array arr of positive integers. 
Your task is to find all the leaders in the array. 
An element is considered a leader if it is greater than or equal to all elements to its right. 
The rightmost element is always a leader.

*/

#include <iostream>
#include <vector>
using namespace std;

void arrayLeaders(vector<int>& arr) {
    int n = arr.size();
    int greatest = arr[n-1]; 

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] < greatest) {
            arr.erase(arr.begin() + i); 
            n--; 
            i--;  
        } else {
            greatest = max(greatest, arr[i]);
        }
    }
}


int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    arrayLeader(arr);

    if (arr.empty()) {
        cout<<"This array is ascending sorted and hence has no leaders."<<endl;
    }
    else {
        cout<<"The leaders of this array are: \n [";
        for (int i=0; i<arr.size(); i++) {
            cout<<arr[i];
            if (i==arr.size()-1) cout<<"]"<<endl;
            else cout<<", ";
        }
    }
  return 0;
}
