// بسم الله الرحمن الرحيم

#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;

main ()
{
  vector<int> v;
  // create an empty vector of integers

  int input;
  // \0
  while (cin >> input)
  // while not end of file
    v.push_back (input);
    // append to vector

  // sort takes two random iterators, and sorts the elements between
  // them. As is always the case in STL, this includes the value
  // referred to by first but not the one referred to by last; indeed,
  // this is often the past-the-end value, and is therefore not
  // dereferenceable.
  sort(v.begin(), v.end());

  int n = v.size();
  for (int i = 0; i < n; i++)
    cout << v[i] << "  ";
}
