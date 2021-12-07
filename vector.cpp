#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  std::vector<int> arr;
  arr.push_back(5);
  arr.push_back(4);
  arr.push_back(1);
  std::sort(arr.begin(), arr.end());
   for(int x = 0; x != arr.size(); x++) {
   std::cout << arr[x] << "\n";
}
}
