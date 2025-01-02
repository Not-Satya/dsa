// Given a strictly increasing array, calculate th ekth missing number
/*
Example: 
Input: [1 2 3 5 7 9], 2
Output: 6

Input: [4, 5, 7, 9, 10], 3
Output: 3

Input: [1 2 3 4 5 6 7 8 9 10], 3
Output: 13

Constraints:
1 <= 'n' <= 10 ^ 4
1 <= 'k' <= 10 ^ 9
-10 ^ 9 <= 'vec[i]' <= 10 ^ 9
*/

#include <iostream>
#include <vector>
using namespace std;

int missingK(vector<int>& arr, int& k) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i<n; i++) {
        if (arr[i] != i+1) {
            int f;
            f = (i == 0)? 1 : arr[i-1]+1;
            for (; f < arr[i]; f++) {
                count++;
                if (count==k) return f;
                if (count > k) break;
            }
        }
    }
    return arr[n-1]+(k-count);
}

int main() {
    vector<int> arr = {4, 5, 6, 8, 10};
    int k =32;
    int ans = missingK(arr,k);
    cout<<"The "<<k;

    if (k > 10 && k < 20) {
        cout<<"th ";
    }
    else {
        switch (k%10) {
            case 1: {
                cout<<"st "; 
                break;
            }
            case 2: {
                cout<<"nd "; 
                break;
            }
            case 3: {
                cout<<"rd "; 
                break;
            }
            default: {
                cout<<"th "; 
                break;
            }
        }
    }
    cout<<"missing number in this array is: "<<ans<<endl;
    return 0;
}
