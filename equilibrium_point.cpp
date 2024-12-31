//find the quilibrium opint of an array
//teh equilibrium point of an array is the index of which the sum of the left is equal to the sum of the right
//return the index of the array in one based indexing

#include <iostream>
#include <vector>
using namespace std;

int equilibriumPoint(vector<int> &arr) {
        int n = arr.size();
        long long netSum = 0, sum = 0;
         
        for (int num : arr) {
            netSum += num;
        }
        
        for (int i = 0; i<n; i++) {
            if (sum == netSum - sum - arr[i]) return i+1;
            
            sum += arr[i];
        }
        return -1;
}

int main() {
    vector<int> arr = {1, 2, 0, 3};
    int ans = equilibriumPoint(arr);

    if (ans != 1) cout<<"The equilibrium point of the array is: "<<ans<<endl;
    else cout<<"there is no equilibrium point in this array."<<endl;
  return 0;
}
