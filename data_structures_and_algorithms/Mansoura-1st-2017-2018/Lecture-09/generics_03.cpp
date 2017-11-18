// بسم الله الرحمن الرحيم

#include <iostream>

using namespace std;

template <typename T, typename U>
U sum(const T a, const U b) {
return a + b;
}

int main() {
cout << sum<int, float>(1, 2.5) << endl;
return 0;
}
