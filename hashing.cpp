/*

Little Jhool is still out of his mind - exploring all his happy childhood memories. 
And one of his favorite memory is when he found a magical ghost, who promised to fulfill one of Little Jhool's wish.

Now, Little Jhool was a kid back then, and so he failed to understand what all could he have asked for from the ghost. 
So, he ends up asking him something very simple. 
(He had the intuition that he'd grow up to be a great Mathematician, and a Ruby programmer, alas!) 
He asked the ghost the power to join a set of *the letters r, u, b and y * into a real ruby. And the ghost, though surprised, granted Little Jhool his wish...

Though he regrets asking for such a lame wish now, but he can still generate a lot of real jewels when he's given a string. 
You just need to tell him, given a string, how many rubies can he generate from it?

Input Format:
The first line contains a number t - denoting the number of test cases.
The next line contains a string.

Output Format:
Print the maximum number of ruby(ies) he can generate from the given string.

Constraints:
1 ≤ t ≤ 100
1 ≤ Length of the string ≤ 100
Sample Input

2
rrrruubbbyy
rubrubrubrubrubrubrubrubrubrubrubrubrubrb

Sample Output

2
0

Time Limit: 2
Memory Limit: 256
Source Limit: 

*/



#include <string>
#include <climits>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	while(num>0) {
		string str;
		cin>>str;
	
		vector<int> arr(128, 0);
	
		int minm = INT_MAX;
		
		for (auto it: str) {
			arr[it]++;
		}
	
		minm = min(min(min(min(minm, arr['r']), arr['u']), arr['b']), arr['y']);
		cout<<minm<<endl;

		num--;
	}
	return 0;
}
