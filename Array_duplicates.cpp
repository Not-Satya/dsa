#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(const vector<int>& arr) {
  unordered_map<int, int> freq;
  vector<int> dupl;

  for (const auto it : arr) freq[i]++;

  for (const auto it : freq) {
    if (it.second > 1) dupl.push_back(it.first);
  }
  return duplicates;
}

void printVec(const vector<int>& arr) {
  cout<<"[ ";
  for (auto it : arr) {
    cout<<it<<" ";
  }
  cout<<"]"<<endl;
}

int main() {
  vector<int> arr = {1, 1, 2, 3, 4, 2};
  vector<int> ans = findDuplicates(arr);

  printVec(ans);
  return 0;
}
