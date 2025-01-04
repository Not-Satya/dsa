// Here we learn on how to perform X^n in O(log(n)) time complexity

// Constraints:
// -2^31 < n < 2^31


#include <iostream>
using namespace std;

int input(int& n) {
    cout<<"Enter the value of the number :";
    cin>>n;
    return n;
}

int decToBin (int n) {
    int ans = 0;
    while (n > 0) {
        ans = (ans * 2) + (n%2);
        n /= 2;
    }
    return ans;
}

long long X_pow_N(int x, int& n) {
    int ans = 1, binForm = decToBin(n);
    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans = ans * x;
        }
        binForm /= 2;
        x *= x;
    }
    return ans;
}

int main() {
    int x, n;
    cout<<"For X^N, first enter the value of X and then N\n";
    input(x);
    input(n);

    int ans = X_pow_N(x, n);

    cout<<"The "<<n<<"th power of "<<x<<" is "<<ans<<endl;
    return 0;
}
