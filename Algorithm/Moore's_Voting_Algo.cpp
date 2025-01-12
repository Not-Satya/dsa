// This Displays the Boyer-Moore Voting Algorithm 
// This determines tha maximum occuring element in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elemnts in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter the elements of the array: "<<endl;
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    // Now we determine Two variables...
    // one as candidate
    // One as count
    // And initialize both with 0
    int count = 0, candidate = 0;

    for (int i = 0; i<n; i++) {
        if (count == 0) candidate = arr[i];

        count += (arr[i] == candidate) ? 1: -1;
    }

    cout<<"The Majority element in the arrray is: "<<candidate<<endl;

    return 0;
}
