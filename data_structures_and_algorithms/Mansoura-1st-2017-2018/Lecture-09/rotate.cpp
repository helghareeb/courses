// بسم الله الرحمن الرحيم

#include <iostream>
#include <algorithm>

using namespace std;
void printArray(const int arr[], const int len) {
  for(int i=0; i < len; i++)
  cout << " " << arr[i];
  cout << endl;
}

int main() {
  int a[] = {5, 7, 2, 1, 4, 3, 6};
  sort(a, a+7);
  printArray(a, 7);
  rotate(a,a+3,a+7);
  printArray(a, 7);
  reverse(a, a+7);
  printArray(a, 7);
  return 0;
}
