// Youre given  an array arr[] of non-negative numbers. Each number tell you the maximum mumber of steps you can jump forward from that position
// find the minimum number of jumps possible to reach the end of array.
// else return -1
/*

Examples : 

Input: arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
Output: 3 
Explanation: First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last. 

Input: arr = [1, 4, 3, 2, 6, 7]
Output: 2 
Explanation: First we jump from the 1st to 2nd element and then jump to the last element.

Input: arr = [0, 10, 20]
Output: -1
Explanation: We cannot go anywhere from the 1st element.

Constraints:
2 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 105

*/
#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;
        if (arr[0] == 0) return -1;
        
        int tracker = 1, steps = arr[0], maxReach = arr[0];
        
        for (int i=1; i<n; i++) {
            if (i == n-1) return tracker;
            
            maxReach = max(maxReach, i+arr[i]);
            steps--;
            
            if (steps == 0) {
                tracker++;
                if (i >= maxReach) return -1;
                steps = maxReach-i;
            }
        }
        return -1;
}

int main() {
        vector <int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
        int ans = minJumps(arr);
        cout<<ans<<endl;
        return 0;
}
