// Code to find frequency of elements in a given array in O(1) time complexity.


#include <iostream>
#include <map>

using namespace std;

int main() {
   int arr[]{1, 3, 2, 1, 4, 3, 2, 1};
   int n = sizeof(arr) / sizeof(arr[0]);
   map<int, int> freq;

   for (int i = 0; i < n; i++) {
      freq[arr[i]]++;
   }

   cout << "Element  Frequency" << endl;
   for(const auto a: freq)
      std::cout<<a.first<<' '<<a.second<<std::endl;

   return 0;
}